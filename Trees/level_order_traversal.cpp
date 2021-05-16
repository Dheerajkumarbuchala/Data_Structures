#include<iostream>
#include<queue>

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

void level_order_traversal(Node* root)
{
    queue<Node *>q;
    q.push(root);
    while(!q.empty())
    {
        Node* temp = q.front();
        cout<<temp->data<<" ";
        if(temp->left!=NULL)
        {
            q.push(temp->left);
        }
        if(temp->right!=NULL)
        {
            q.push(temp->right);
        }
        q.pop();
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
    level_order_traversal(root);
}