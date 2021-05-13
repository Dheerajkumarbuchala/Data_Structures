#include<iostream>

using namespace std;

void leaders_in_array(int a[],int n)
{
    int temp = a[n-1];
    cout<<temp<<" ";
    for(int i=n-2;i>=0;i--)
    {
        if(a[i]>temp)
        {
            temp = a[i];
            cout<<temp<<" ";
        }
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
    leaders_in_array(a,n);
}