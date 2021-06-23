#include<iostream>
#include<vector>
#include<map>

using namespace std;

bool check_if_two_arrays_are_equal(int a[],int b[],int n)
{
    map<int,int>m;
    for(int i=0;i<n;i++)
    {
        m[a[i]]++;
    }
    for(int i=0;i<n;i++)
    {
        m[b[i]]--;
    }
    for(int i=0;i<n;i++)
    {
        if(m[a[i]]!=0)
        {
            return false;
        }
    }
    return true;
}

int main(void)
{
    int n;
    cout<<"Enter the size of array1 : ";
    cin>>n;
    int a[n];
    cout<<"Enter the elements of the array1 : "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int b[n];
    cout<<"Enter the elements of the array2 : "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    cout<<check_if_two_arrays_are_equal(a,b,n)<<endl;
}