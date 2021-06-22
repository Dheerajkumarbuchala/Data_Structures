#include<iostream>
#include<vector>

using namespace std;

void quadratic_probing(int hash_size,int a[],int n)
{
    vector<int>v(hash_size,-1);
    for(int i=0;i<n;i++)
    {
        int k = a[i] % hash_size;
        if(v[k]==-1)
        {
            v[k] = a[i];
        }
        else
        {
            int count = 1;
            int pos = (k + count*count) % hash_size;
            while(pos<hash_size && v[pos]!=-1)
            {
                count = count + 1;
                pos = (k + count*count) % hash_size;
            }
            v[pos] = a[i];
        }
    }
    for(int i=0;i<hash_size;i++)
    {
        cout<<v[i]<<" ";
    }
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
    int hash_size;
    cout<<"Enter the hash size : ";
    cin>>hash_size;
    quadratic_probing(hash_size,a,n);
}