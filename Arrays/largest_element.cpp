#include<iostream>

using namespace std;

int largest_element(int a[],int n)
{
    int k = a[0];
    for(int i=1;i<n;i++)
    {
        if(k<a[i])
        {
            k = a[i];
        }
    }
    return k;
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
    cout<<"Largest element in the array : "<<largest_element(a,n)<<endl;
}