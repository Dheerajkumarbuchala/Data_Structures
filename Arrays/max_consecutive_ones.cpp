#include<iostream>

using namespace std;

int max_consecutive_ones(int a[],int n)
{
    int count = 0 ,res = 0;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=1)
        {
            count = 0;
        }
        else
        {
            count++;
            res = max(res,count);
        }
    }
    return res;
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
    int res = max_consecutive_ones(a,n);
    cout<<"Max consecutive 1's : "<<res<<endl;
}