#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c=0,d=0,m,i,n,j,p,t=0,k,array[100000+10],ar[100000],q,sum1=0,cnt=0,sum=0,flag,ans,f=0,l;
    long long int st,ct,qt;
    string str,ptr,sp[5000];
    set<pair<long long int,long long int>>vecs;
    long long int count[10000];
    memset(count,0,sizeof(count));
    stack<long long int>stck;
    vector<char>vc;
    for(i=1; i<=100; i++)
    {
        p=(i*(i+1))/2;
        count[p]++;
    }
    cin>>a;
    if(count[a]==1)
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
