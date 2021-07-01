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

int maximum_width(node * root)
{
    queue<node *>q;
    q.push(root);
    int s = 0,res = 0;
    while(q.empty()==false)
    {
        s = q.size();
        res = max(res,s);
        for(int i=0;i<s;i++)
        {
            node * temp = q.front();
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
    }
    return res;
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
    cout<<maximum_width(root1)<<endl;
    cout<<maximum_width(root2)<<endl;
}