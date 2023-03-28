#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c=0,d=0,m,i,n,j,p,t=0,k,array[100000+10],ar[100000],q,sum1=0,cnt=0,sum=0,flag,ans,f=0,l;
    long long int st,ct,qt;
    string str,ptr,sp[5000];
    set<pair<long long int,long long int>>vecs;
    vector<long long int>vi(100000,0);
    stack<long long int>stck;
    vector<char>vc;
    cin>>n>>m>>a>>b;
    p=m/a;
    if(m%a!=0)
        p++;
    k=p*n;
    ans=k/b;
    if(k%b!=0)
        ans++;
    cout<<ans<<endl;
}
