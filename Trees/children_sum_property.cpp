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

bool children_sum_property(node * root)
{
    if(root==NULL)
    {
        return true;
    }
    else if(root->left==NULL&&root->right==NULL)
    {
        return true;
    }
    int s = 0;
    if(root->left!=NULL)
    {
        s = s + root->left->data;
    }
    if(root->right!=NULL)
    {
        s = s + root->right->data;
    }
    return(root->data==s && children_sum_property(root->left) && children_sum_property(root->right));
}

int main()
{
    node * root = new node(20);
    root->left = new node(8);
    root->right = new node(12);
    root->left->left = new node(3);
    root->left->right = new node(5);
    cout<<children_sum_property(root)<<endl;
}