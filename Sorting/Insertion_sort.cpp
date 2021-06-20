#include<iostream>

using namespace std;

void insertion_sort(int a[],int n)
{
    for(int i=1;i<n;i++)
    {
        int j = i-1;
        int k = a[i];
        while(j>=0&&a[j]>k)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = k;
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
    insertion_sort(a,n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}