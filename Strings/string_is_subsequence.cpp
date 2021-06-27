#include<iostream>
#include<string.h>

using namespace std;

bool string_is_subsequence_of_other(string str1,string str2)
{
    int n = str1.length();
    int m = str2.length();
    if(n<m)
    {
        return false;
    }
    int j = 0;
    for(int i=0;i<n&&j<m;i++)
    {
        if(str1[i]==str2[j])
        {
            j++;
        }
    }
    return (j==m);
}

int main(void)
{
    string str1 , str2;
    cout<<"Enter the string 1 : ";
    getline(cin,str1);
    cout<<"Enter the string 2 : ";
    getline(cin,str2);
    cout<<string_is_subsequence_of_other(str1,str2)<<endl;
}