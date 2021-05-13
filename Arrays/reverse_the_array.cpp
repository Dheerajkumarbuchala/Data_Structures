#include<iostream>

using namespace std;

void reverse_the_array(int a[],int n)
{
    int low=0,high=n-1;
    while(low<high)
    {
        int temp = a[low];
        a[low] = a[high];
        a[high] = temp;
        low++;
        high--;
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
    reverse_the_array(a,n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}