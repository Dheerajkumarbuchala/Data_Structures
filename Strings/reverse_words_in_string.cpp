#include<iostream>
#include<string.h>

using namespace std;

void reverse_word(char a[],int start,int finish)
{
    while(start<finish)
    {
        swap(a[start],a[finish]);
        start++;
        finish--;
    }
}

void reverse_words_in_string(char a[])
{
    int n = strlen(a);
    int start = 0;
    for(int finish=0;finish<n;finish++)
    {
        if(a[finish]==' ')
        {
            reverse_word(a,start,finish-1);
            start = finish + 1;
        }
    }
    reverse_word(a,start,n-1);
    reverse_word(a,0,n-1);
}

int main(void)
{
    char a[] = "Just going on with the flow";
    reverse_words_in_string(a);
    cout<<a<<endl;
}