#include<iostream>
#include<string.h>

using namespace std;

bool check_if_strings_are_rotations(string str1,string str2)
{
    if(str1.length()!=str2.length())
    {
        return false;
    }
    return ((str1+str1).find(str2)!=string::npos);
}

int main(void)
{
    string str1,str2;
    cout<<"Enter the string 1 : ";
    getline(cin,str1);
    cout<<"Enter the string 2 : ";
    getline(cin,str2);
    cout<<check_if_strings_are_rotations(str1,str2)<<endl;
}