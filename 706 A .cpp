#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c,d,m,i,n,j,p,t,k,v,array[100000+10],ar[100000],q,sum1=0,cnt,sum=0,flag,ans=764839201349.00000,f=0,l;
    long long int st,ct,qt;
    string str,ptr,sp[5000];
    set<pair<long long int,long long int>>vecs;
    vector<long long int>vi;
    stack<long long int>stck;
    vector<char>vc;
    cin>>a>>b;
    cin>>m;
    for(i=1;i<=m;i++)
    {
        cin>>c>>d>>v;
        p=abs(c-a);
        t=abs(d-b);
        //cout<<p<<" "<<t<<endl;
        k=sqrt(p*p+t*t);
        ans=min(ans,k/v);
    }
  cout<<setprecision(20)<<ans<<endl;
}
