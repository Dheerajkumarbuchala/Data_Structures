#include<iostream>
#include<vector>
#include<unordered_set>

using namespace std;

void pair_with_given_sum(int a[],int n,int s)
{
    unordered_set<int>h;
    int flag = 0;
    for(int i=0;i<n;i++)
    {
        h.insert(a[i]);
    }
    for(int i=0;i<n;i++)
    {
        h.erase(a[i]);
        if(h.count(s-a[i])>0)
        {
            flag = 1;
        }
        h.insert(a[i]);
    }
    cout<<flag;
}

int main(void)
{
    int n,s;
    cout<<"Enter the size of array : ";
    cin>>n;
    int a[n];
    cout<<"Enter the elements of the array : "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the sum to check : ";
    cin>>s;
    pair_with_given_sum(a,n,s);
}