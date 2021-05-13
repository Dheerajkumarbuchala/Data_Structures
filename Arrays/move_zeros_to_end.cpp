#include<iostream>

using namespace std;

void move_zeros_to_end(int a[],int n)
{
    int count = 0;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=0)
        {
            a[count] = a[i];
            a[i] = 0;
            count++;
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
    move_zeros_to_end(a,n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}