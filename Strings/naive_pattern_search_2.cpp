#include<iostream>
#include<string.h>

using namespace std;

void naive_pattern_search(string str1,string str2)
{
    int n = str1.length();
    int m = str2.length();
    for(int i=0;i<=n-m;i++)
    {
        int j = 0;
        for(j=0;j<m;j++)
        {
            if(str2[j]!=str1[i+j])
            {
                break;
            }
        }
        if(j==m)
        {
            cout<<i<<" ";
        }
    }
}

int main(void)
{
    string str1,str2;
    cout<<"Enter the string 1 : ";
    getline(cin,str1);
    cout<<"Enter the string 2 : ";
    getline(cin,str2);
    naive_pattern_search(str1,str2);
}