#include<iostream>

using namespace std;

struct node{
    int data;
    node * next;
    node(int k)
    {
        data = k;
        next = NULL;
    }
};

void insert_at_end(node * head)
{
    node * temp = NULL;
    int a = 0;
    cout<<"Enter the data to insert at end : ";
    cin>>a;
    temp = head;
    while(temp->next!=NULL)
    {
        temp = temp->next;
    }
    node * newnode = new node(a);
    temp->next = newnode;
    temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

void bulid_linked_list(int n)
{
    node *head = NULL,*temp = NULL;
    int a = 0;
    cout<<"Enter the head data : ";
    cin>>a;
    head = new node(a);
    temp = head;
    while(n-1>0)
    {
        int b = 0;
        cout<<"Enter the data to be inserted : ";
        cin>>b;
        node *newnode = new node(b);
        temp->next = newnode;
        temp = newnode;
        n = n-1;
    }
    temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
    insert_at_end(head);
}

int main(void)
{
    int n = 0;
    cout<<"Enter the no of nodes to initialize the linked list : ";
    cin>>n;
    bulid_linked_list(n);
}