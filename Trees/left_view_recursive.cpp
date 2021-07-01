#include<iostream>

using namespace std;

struct node{
    int data;
    node * left;
    node * right;
    node(int k)
    {
        data = k;
        node * left = NULL;
        node * right = NULL;
    }
};

int l = 0;

void left_view_recursive(node * root,int level)
{
    if(root==NULL)
    {
        return;
    }
    if(l<level)
    {
        cout<<root->data<<" ";
        l = level;
    }
    left_view_recursive(root->left,level+1);
    left_view_recursive(root->right,level+1);
}

int main(void)
{
    node * root = new node(10);
    root->left = new node(20);
    root->right = new node(30);
    root->left->left = new node(40);
    root->left->right = new node(50);
    root->right->left = new node(60);
    root->right->right = new node(70);
    left_view_recursive(root,1);
}