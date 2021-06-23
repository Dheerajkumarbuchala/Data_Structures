#include<iostream>
#include<vector>
#include<unordered_map>
#include<string>

using namespace std;

string winner_of_election(string a[],int n)
{
    unordered_map<string,int>m;
    string s;
    int c = 0;
    for(int i=0;i<n;i++)
    {
        m[a[i]]++;
    }
    for(int i=0;i<n;i++)
    {
        if(c<m[a[i]])
        {
            s = a[i] +" "+to_string(m[a[i]]);
            c = m[a[i]];
        }
    }
    return s;
}

int main(void)
{
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    string a[n];
    cout<<"Enter the elements of the array : "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<winner_of_election(a,n)<<endl;
}