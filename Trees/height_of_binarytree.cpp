#include<iostream>

using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int k){
        data = k;
        left = NULL;
        right = NULL;
    }
};

int height(Node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    int l = 1+height(root->left);
    int r = 1+height(root->right);
    return max(l,r);
}

int main(void)
{
    Node* root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    root->right->left = new Node(60);
    root->right->right = new Node(70);
    int k = height(root);
    cout<<"Height of binary tree : "<<k<<endl;
}