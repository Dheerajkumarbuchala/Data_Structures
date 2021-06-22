#include<iostream>
#include<vector>

using namespace std;

vector<vector<int>> separate_hashing(int hash_size,int a[],int n)
{
    vector<vector<int>>v(hash_size);
    for(int i=0;i<n;i++)
    {
        int k = a[i] % hash_size;
        v[k].push_back(a[i]);
    }
    return v;
}

int main(void)
{
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int a[n];
    cout<<"Enter the elements of the array : "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int hash_size;
    cout<<"Enter the hash size : ";
    cin>>hash_size;
    vector<vector<int>>h = separate_hashing(hash_size,a,n);
    for(int i=0;i<hash_size;i++)
    {
        if(h[i].size()>0)
        {
            for(int j=0;j<h[i].size();j++)
            {
                cout<<h[i][j]<<" ";
            }
        }
        cout<<endl;
    }
}