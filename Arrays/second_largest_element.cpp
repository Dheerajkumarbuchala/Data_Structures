#include<iostream>

using namespace std;

int second_largest_element(int a[],int n)
{
    int k = a[0] , m = -1;
    for(int i=1;i<n;i++)
    {
        if(k<a[i])
        {
            m = k;
            k = a[i];
        }
        else if(k>a[i])
        {
            if(m<a[i])
            {
                m = a[i];
            }
        }
    }
    return m;
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
    cout<<"Second largest element in the array : "<<second_largest_element(a,n)<<endl;
}