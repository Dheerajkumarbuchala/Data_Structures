#include<iostream>

using namespace std;

int binary_search_iterative(int a[],int n,int e)
{
    int low = 0,high = n-1;
    while(low<=high)
    {
        int mid = (low + high)/2;
        if(a[mid]==e)
        {
            return mid;
        }
        else if(a[mid]<e)
        {
            low = mid+1;
        }
        else 
        {
            high = mid-1;
        }
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
    int k = binary_search_iterative(a,n,e);
    if(k>=0)
    {
        cout<<"Position of the element in array : "<<k<<endl;
    }
}