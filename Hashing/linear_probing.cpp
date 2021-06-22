#include<iostream>
#include<vector>

using namespace std;

vector<int> linear_probing(int hash_size,int a[],int n)
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
            int pos = (k + 1) % hash_size;
            while(pos<hash_size && v[pos]!=-1)
            {
                pos = (pos + 1) % hash_size;
            }
            v[pos] = a[i];
        }
    }
    return v;
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
    vector<int>h = linear_probing(hash_size,a,n);
    for(int i=0;i<hash_size;i++)
    {
        cout<<h[i]<<" ";
    }
}