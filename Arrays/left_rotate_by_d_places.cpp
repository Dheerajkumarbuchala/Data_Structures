#include<iostream>

using namespace std;

void left_rotate_by_one(int a[],int n,int d)
{
    int b[d];
    for(int i=0;i<d;i++)
    {
        b[i] = a[i];
    }
    for(int i=d;i<n;i++)
    {
        a[i-d] = a[i];
    }
    for(int i=n-d;i<n;i++)
    {
        a[i] = b[i-n+d];
    }
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
    int d;
    cout<<"No of rotations : ";
    cin>>d;
    d = d % n;
    left_rotate_by_one(a,n,d);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}