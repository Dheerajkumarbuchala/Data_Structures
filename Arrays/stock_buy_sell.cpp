#include<iostream>

using namespace std;

int stock_buy_sell(int a[],int n)
{
    int max_profit = 0;
    for(int i=0;i<n-1;i++)
    {
        if(a[i]<a[i+1])
        {
            max_profit = max_profit + a[i+1] - a[i];
        }
    }
    return max_profit;
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
    int profit = stock_buy_sell(a,n);
    cout<<"Max profit : "<<profit<<endl;
}