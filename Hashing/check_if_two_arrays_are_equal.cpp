#include<iostream>
#include<vector>
#include<unordered_set>

using namespace std;

bool check_if_two_arrays_are_equal(int a[],int b[],int n)
{
    unordered_set<int>s;
    for(int i=0;i<n;i++)
    {
        s.insert(a[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(s.count(b[i])==0)
        {
            return false;
        }
        else
        {
            s.erase(b[i]);
        }
    }
    if(s.size()>0)
    {
        return false;
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