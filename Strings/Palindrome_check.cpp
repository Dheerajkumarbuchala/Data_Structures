#include<iostream>
#include<string.h>

using namespace std;

bool palindrome_check(string str)
{
    int low = 0,high = str.length() - 1;
    while(low<high)
    {
        if(str[low]!=str[high])
        {
            return false;
        }
        low++;
        high--;
    }
    return true;
}

int main(void)
{
    string str;
    cout<<"Enter the string : ";
    getline(cin,str);
    cout<<palindrome_check(str)<<endl;
}