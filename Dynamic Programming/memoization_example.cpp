#include<iostream>

using namespace std;

int memo[100000];

int fib(int n)
{
    if(memo[n]==-1)
    {
        int res = 0;
        if(n==0||n==1)
        {
            res = n;
        }
        else
        {
            res = fib(n-1) + fib(n-2);
        }
        memo[n] = res;
    }
    return memo[n];
}

int main(void)
{
    int n = 0;
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        memo[i] = -1;
    }
    cout<<fib(n)<<endl;
}