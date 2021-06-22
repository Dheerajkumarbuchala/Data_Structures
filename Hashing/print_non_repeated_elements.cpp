#include<iostream>
#include<vector>
#include<map>

using namespace std;

vector<int> print_non_repeated_elements(int a[],int n)
{
    map<int,int>u;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        if(u[a[i]])
        {
            u[a[i]] = u[a[i]] + 1;
        }
        else
        {
            u[a[i]] = 1;
        }
    }
    for(auto x : u)
    {
        if(x.second==1)
        {
            v.push_back(x.first);
        }
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
    vector<int>h = print_non_repeated_elements(a,n);
    for(int i=0;i<h.size();i++)
    {
        cout<<h[i]<<" ";
    }
}