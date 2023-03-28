
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int   a,b,c,d,m,jor=0,bejr=0,n,p,t,k,array[100000+10],q,sum1=0,cnt,sum=0,flag,ans,f,l;
    long long int ct,qt,i,j;
    double arr[100000];
    string str,ptr,sp[5000],st;
    set<pair<long long int,long long int>>vecs;
    vector<long long int>vi;
    stack<long long int>stck;
    vector<char>vc;
    set<char>sc;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>array[i];
        arr[i]=array[i];
    }
    sort(arr,arr+n);
    p=arr[n-1];
    for(i=0;i<n;i++)
    {
        if(array[i]==p)
        {
            k=i+1;
            break;
        }
    }
    cout<<k<<" "<<arr[n-2]<<endl;
}
