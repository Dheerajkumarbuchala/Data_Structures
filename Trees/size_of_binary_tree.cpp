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

int size_of_a_binary_tree(node * root)
{
    if(root==NULL)
    {
        return 0;
    }
    return 1+size_of_a_binary_tree(root->left)+size_of_a_binary_tree(root->right);
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
    cout<<size_of_a_binary_tree(root)<<endl;
}