#include<iostream>

using namespace std;

int remove_duplicates_from_sorted_array(int a[],int n)
{
    int size = 1;
    for(int i=1;i<n;i++)
    {
        if(a[size-1]!=a[i])
        {
            a[size] = a[i];
            size = size + 1;
        }
    }
    return size;
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
    int k = remove_duplicates_from_sorted_array(a,n);
    for(int i=0;i<k;i++)
    {
        cout<<a[i]<<" ";
    }
}