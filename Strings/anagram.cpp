#include<iostream>
#include<string.h>

using namespace std;

bool check_for_anagram(string str1,string str2)
{
    int a[26];
    for(int i=0;i<26;i++)
    {
        a[i] = 0;
    }
    for(int i=0;i<str1.length();i++)
    {
        int k = str1[i] - 'a';
        a[k] = a[k] + 1;
    }
    for(int i=0;i<str2.length();i++)
    {
        int k = str2[i] - 'a';
        a[k] = a[k] - 1;
    }
    for(int i=0;i<26;i++)
    {
        if(a[i]!=0)
        {
            return false;
        }
    }
    return true;
}

int main(void)
{
    string str1,str2;
    cout<<"Enter string 1 : ";
    getline(cin,str1);
    cout<<"Enter string 2 : ";
    getline(cin,str2);
    int n = str1.length();
    int m = str2.length();
    if(m==n)
    {
        cout<<check_for_anagram(str1,str2)<<endl;
    }
    else
    {
        cout<<"Invalid input."<<endl;
    }
}