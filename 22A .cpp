#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d,m,i,n,j,p,t,k,array[100000+10],ar[100000],q,sum1=0,cnt,sum=0,flag,ans,f=0,l;
    long long int st,ct,qt;
    string str,ptr,sp[5000];
    set<pair<long long int,long long int>>vecs;
    vector<long long int>vi;
    stack<long long int>stck;
    vector<char>vc;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>array[i];
    }
    sort(array,array+n);
    p=array[0];
    for(i=1;i<n;i++)
    {
        if(array[i]!=p)
        {
            cout<<array[i]<<endl;
            return 0;
        }
    }
   cout<<"NO"<<endl;
}
