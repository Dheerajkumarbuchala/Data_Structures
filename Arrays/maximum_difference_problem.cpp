#include<iostream>

using namespace std;

void maximum_difference_problem(int a[],int n)
{
    int res = a[1] - a[0];
    int k = a[0];
    for(int i=1;i<n;i++)
    {
        res = max(res,a[i]-k);
        k = min(k,a[i]);
    }
    cout<<"The max difference is : "<<res<<endl;
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
    maximum_difference_problem(a,n);
}