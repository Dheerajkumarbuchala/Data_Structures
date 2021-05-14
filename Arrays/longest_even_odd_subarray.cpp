#include<iostream>

using namespace std;

int longest_even_odd_subarray(int a[],int n)
{
    int count = 0,res = 0;
    for(int i=0;i<n;i++)
    {
        if((a[i]%2==0&&a[i+1]%2!=0)||(a[i]%2!=0&&a[i+1]%2==0))
        {
            count++;
            res = max(count,res);
        }
        else
        {
            count = 0;
        }
    }
    return res+1;
}

int main(void)
{
    int n;
    cout<<"Size of array : ";
    cin>>n;
    int a[n];
    cout<<"Enter the elements of array : "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int res = longest_even_odd_subarray(a,n);
    cout<<"Length of longest even odd subarray : "<<res<<endl;
}