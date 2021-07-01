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

int maximum_in_binary_tree(node * root)
{
    if(root==NULL)
    {
        return -1;
    }
    else
    {
        return max(root->data,max(maximum_in_binary_tree(root->left),maximum_in_binary_tree(root->right)));
    }
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
    cout<<maximum_in_binary_tree(root)<<endl;
}