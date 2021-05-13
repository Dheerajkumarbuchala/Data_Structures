#include<iostream>

using namespace std;

void frequency_in_sorted_array(int a[],int n)
{
    int count = 0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==a[i+1])
        {
            count = count + 1;
        }
        else
        {
            cout<<a[i]<<" : "<<count+1<<endl;
            count = 0;
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
    frequency_in_sorted_array(a,n);
}