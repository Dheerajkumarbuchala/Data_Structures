#include<iostream>
using namespace std;

bool sorted_or_not(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        if(a[i]>=a[i+1])
        {
            return false;
        }
    }
    return true;
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
    bool k =sorted_or_not(a,n);
    if(k=1)
    {
        cout<<"true"<<endl;
    }
    else
    {
        cout<<"false"<<endl;
    }
}
