#include<iostream>
#include<string.h>

using namespace std;

const int CHAR = 256;

int left_most_repeating_character(string str)
{
    int a[CHAR] = {0};
    int k = -1;
    for(int i=0;i<str.length();i++)
    {
        a[str[i]] = a[str[i]] + 1;
    }
    for(int i=0;i<str.length();i++)
    {
        if(a[str[i]]==1)
        {
            k = i;
            break;
        }
    }
    return k;
}

int main(void)
{
    string str;
    cout<<"Enter the string : ";
    getline(cin,str);
    int k = left_most_repeating_character(str);
    if(k>=0)
    {
        cout<<"Index of left most non repeating character is : "<<k<<endl;
        cout<<"Character is : "<<str[k]<<endl;
    }
    else
    {
        cout<<"There is no non repeating character."<<endl;
    }
}