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

int a = 0;

node * build_a_tree(int in[],int pre[],int l,int h)
{
    if(l>h)
    {
        return NULL;
    }
    node * root = new node(pre[a++]);
    int b = 0;
    for(int i=l;i<=h;i++)
    {
        if(in[i]==root->data)
        {
            b = i;
            break;
        }
    }
    root->left = build_a_tree(in,pre,l,b-1);
    root->right = build_a_tree(in,pre,b+1,h);
    return root;
}

void inorder_traversal(node * root)
{
    if(root!=NULL)
    {
        inorder_traversal(root->left);
        cout<<root->data<<" ";
        inorder_traversal(root->right);
    }
}

int main(void)
{
    int n = 0;
    cout<<"Enter no of nodes : ";
    cin>>n;
    int in[n],pre[n];
    cout<<"Enter the nodes in inorder : "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>in[i];
    }
    cout<<"Enter the nodes in preorder : "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>pre[i];
    }
    node * temp = build_a_tree(in,pre,0,n-1);
    inorder_traversal(temp);
}