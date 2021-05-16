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

void print_nodes_at_k_distance(Node* root,int k)
{
    if(root==NULL)
    {
        return;
    }
    else if(k==0)
    {
        cout<<root->data<<" ";
    }
    else
    {
        print_nodes_at_k_distance(root->left,k-1);
        print_nodes_at_k_distance(root->right,k-1);
    }
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
    int k = 2; //change k with your preference 
    print_nodes_at_k_distance(root,k);
}