#include<iostream>

using namespace std;

int max_sub_array_sum(int a[],int n)
{
    int s = 0,res = -1;
    for(int i=0;i<n;i++)
    {
        s = s + a[i];
        if(s<0)
        {
            s = 0;
        }
        res = max(res,s);
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
    int res = max_sub_array_sum(a,n);
    cout<<"Max sub array sum : "<<res<<endl;
}