#include<iostream>

using namespace std;

int binary_search_recursive(int a[],int l,int h,int e)
{
    if(l>h)
    {
        return -1;
    }
    int mid = (l+h)/2;
    if(a[mid]==e)
    {
        return mid;
    }
    else if(a[mid]>e)
    {
        return binary_search_recursive(a,l,mid-1,e);
    }
    else if(a[mid]<e)
    {
        return binary_search_recursive(a,mid+1,h,e);
    }
    return -1;
}

int main(void)
{
    int n;
    cout<<"Size of the array : ";
    cin>>n;
    int a[n];
    cout<<"Enter the elements in sorted order : "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int e;
    cout<<"Enter the element to find : ";
    cin>>e;
    int k = binary_search_recursive(a,0,n,e);
    if(k>=0)
    {
        cout<<"Position of the element in array : "<<k<<endl;
    }
    else
    {
        cout<<"The element is not present in array."<<endl;
    }
}