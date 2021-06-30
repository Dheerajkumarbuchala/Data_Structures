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

void insert_at_pos(node * head)
{
    int pos = 0,a = 0;
    node * temp = NULL;
    temp = head;
    cout<<"Enter the position to enter the data : ";
    cin>>pos;
    cout<<"Enter the data to be inserted : ";
    cin>>a;
    node * newnode = new node(a);
    if(pos==1)
    {
        newnode->next = head;
        head = newnode;
    }
    else if(pos>1)
    {
        while(pos!=2)
        {
            pos--;
            temp = temp->next;
        }
        newnode->next = temp->next;
        temp->next = newnode;
    }
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
    insert_at_pos(head);
}

int main(void)
{
    int n = 0;
    cout<<"Enter the no of nodes to initialize the linked list : ";
    cin>>n;
    bulid_linked_list(n);
}