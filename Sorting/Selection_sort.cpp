#include<iostream>

using namespace std;

void selection_sort(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        int k = i;
        for(int j=i+1;j<n;j++)
        {
            if(a[k]>a[j])
            {
                k = j;
            }
        }
        swap(a[k],a[i]);
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
    selection_sort(a,n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}