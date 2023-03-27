#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d,m,i,n,j,p=0,t=0,k,array[100000+10],ar[100000],q,sum1=0,cnt,sum=0,flag,ans,f=0,l;
    long long int st,ct,qt;
    string str,ptr,sp[5000];
    set<pair<long long int,long long int>>vecs;
    vector<long long int>vi;
    stack<long long int>stck;
    vector<char>vc;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>array[i];
    }
    array[0]=0;
    cin>>c>>d;
    a=min(d,c);
    b=max(c,d);
   // cout<<a<<" "<<b<<endl;
    for(i=a;i<b;i++)
    {
        p+=array[i];
    }
    //cout<<p<<endl;
    for(i=a-1;i>=1;i--)
    {
        t=t+array[i];
    }
    //cout<<t<<endl;
    for(j=n;j>=b;j--)
    {
        t+=array[j];
    }
    //cout<<t<<endl;
   cout<<min(t,p)<<endl;

}
