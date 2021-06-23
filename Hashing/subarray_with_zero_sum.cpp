#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

bool subarray_with_zero_sum(int a[],int n)
{
    unordered_map<int,bool>m;
    int s = 0;
    for(int i=0;i<n;i++)
    {
        s = s + a[i];
        if(s==0 || m[s]==true)
        {
            return true;
        }
        m[s] = true;
    }
    return false;
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
    cout<<subarray_with_zero_sum(a,n)<<endl;
}