#include<iostream>
#include<vector>
#include<unordered_set>

using namespace std;

void union_of_two_arrays(int a[],int n,int b[],int m)
{
    unordered_set<int>s;
    for(int i=0;i<n;i++)
    {
        s.insert(a[i]);
    }
    for(int i=0;i<m;i++)
    {
        s.insert(b[i]);
    }
    cout<<s.size()<<endl;
}

int main(void)
{
    int n,m;
    cout<<"Enter the size of array1 : ";
    cin>>n;
    int a[n];
    cout<<"Enter the elements of the array1 : "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the size of array2 : ";
    cin>>m;
    int b[m];
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    union_of_two_arrays(a,n,b,m);
}