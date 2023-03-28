#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c=0,d=0,m,i,n,j,p,t=0,k,q,sum1=0,cnt=0,sum=0,flag,ans=INT_MAX,f=0,l;
    long long int st,ct,qt;
    string str,ptr,sp[5000];
    set<pair<long long int,long long int>>vecs;
    vector<long long int>vi(100000,0);
    stack<long long int>stck;
    vector<char>vc;
    char array[101][101];
    long long int count[100000];
    memset(count,0,sizeof(count));
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    q=sqrt(n);
    if(q*q==n)
    {
        cout<<4*q<<endl;
        return 0;
    }
    for(i=1; i<=q; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(i*j==n)
            {

                ans=min(ans,2*(i+j));
            }
        }
    }
    cout<<ans<<endl;
}
