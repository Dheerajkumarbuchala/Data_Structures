#include<iostream>
#include<vector>
#include<map>

using namespace std;

void first_repeating_element(int a[],int n)
{
    map<int,int>m;
    int k = -1;
    for(int i=0;i<n;i++)
    {
        m[a[i]]++;
    }
    for(int i=0;i<n;i++)
    {
        if(m[a[i]]>1)
        {
            k = i+1;
            break;
        }
    }
    cout<<k;
}

int main(void)
{
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int a[n];
    cout<<"Enter the elements of the array : "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    first_repeating_element(a,n);
}