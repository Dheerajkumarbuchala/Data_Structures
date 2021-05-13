#include<iostream>

using namespace std;

int trapping_rain_water(int a[],int n)
{
    int count = 0;
    for(int i=1;i<n-1;i++)
    {
        int l = 0;
        for(int j=0;j<i;j++)
        {
            l = max(l,a[j]);
        }
        int r = 0;
        for(int j=i+1;j<n;j++)
        {
            r = max(r,a[j]);
        }
        count = count + min(l,r) - a[i];
    }
    return count;
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
    int k = trapping_rain_water(a,n);
    cout<<"Water trapped : "<<k<<endl;
}