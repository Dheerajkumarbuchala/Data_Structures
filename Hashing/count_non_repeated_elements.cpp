#include<iostream>
#include<vector>
#include<unordered_set>

using namespace std;

void count_non_repeated_elements(int a[],int n)
{
    unordered_set<int>s;
    int count = 0;
    for(int i=0;i<n;i++)
    {
        s.insert(a[i]);
    }
    cout<<s.size();
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
    count_non_repeated_elements(a,n);
}