#include<iostream>
#include<string.h>

using namespace std;

const int CHAR = 256;

bool Equal(int ct[],int cp[])
{
    for(int i=0;i<256;i++)
    {
        if(ct[i]!=cp[i])
        {
            return false;
        }
    }
    return true;
}

bool anagram(string str1,string str2)
{
    int ct[CHAR]={0},cp[CHAR]={0};
    for(int i=0;i<str2.length();i++)
    {
        ct[str1[i]]++;
        cp[str2[i]]++;
    }
    for(int i=str2.length();i<=str1.length()-str2.length();i++)
    {
        if(Equal(ct,cp))
        {
            return true;
        }
        else
        {
            ct[str1[i]]++;
            ct[str1[i-str2.length()]]--;
        }
    }
    return false;
}

int main(void)
{
    string str1,str2;
    cout<<"Enter the text to search pattern (Anagram) : ";
    getline(cin,str1);
    cout<<"Enter the pattern : ";
    getline(cin,str2);
    cout<<anagram(str1,str2)<<endl;
}