#include<iostream>
#include<queue>

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

void level_order_traversal_line_by_line(node * root)
{
    queue<node *>q;
    q.push(root);
    while(q.empty()==false)
    {
        int k = q.size();
        for(int i=0;i<k;i++)
        {
            node * temp = q.front();
            cout<<temp->data<<" ";
            q.pop();
            if(temp->left!=NULL)
            {
                q.push(temp->left);
            }
            if(temp->right!=NULL)
            {
                q.push(temp->right);
            }
        }
        cout<<endl;
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
    level_order_traversal_line_by_line(root);
}