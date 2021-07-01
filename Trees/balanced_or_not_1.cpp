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

int height(node * temp)
{
    if(temp==NULL)
    {
        return 0;
    }
    return 1+height(temp->left)+height(temp->right);
}

bool balanced_or_not(node * root)
{
    if(root==NULL)
    {
        return true;
    }
    int l = height(root->left);
    int r = height(root->right);
    return ((abs(l-r)<=1)&&balanced_or_not(root->left)&&balanced_or_not(root->right));
}

int main(void)
{
    node * root1 = new node(10);
    root1->left = new node(20);
    root1->right = new node(30);
    root1->left->left = new node(40);
    root1->left->right = new node(50);
    root1->right->left = new node(60);
    root1->right->right = new node(70);
    node * root2 = new node(10);
    root2->right = new node(20);
    root2->right->left = new node(30);
    cout<<balanced_or_not(root1)<<endl;
    cout<<balanced_or_not(root2)<<endl;
}