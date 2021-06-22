#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

void count_non_repeated_elements(int a[],int n)
{
    unordered_map<int,int>u;
    int count = 0;
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
            count++;
        }
    }
    cout<<count;
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
    count_non_repeated_elements(a,n);
}