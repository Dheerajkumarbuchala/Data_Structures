#include<iostream>

using namespace std;

void left_rotate_by_one(int a[],int n)
{
    int temp = a[0];
    for(int i=0;i<n-1;i++)
    {
        a[i] = a[i+1];
    }
    a[n-1] = temp; 
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
    left_rotate_by_one(a,n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}