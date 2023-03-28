
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d,n,m,g,i=1,j,p,t,k,f,array[100000+10],ar[100000],q,sum=0,cnt=0,flag,ans,dp[101];
    long long int st,ct,qt;
    string str,ptr,sp[5000];
    set<pair<long long int,long long int>>vecs;
    vector<long long int>vecc;
    stack<long long int>stck;
    cin>>n;
    dp[0]=1;
    dp[1]=1;
    for(i=2; i<=n; i++)
    {
        dp[i]=dp[i-1]+2;
        sum=sum+dp[i];
    }
    sum++;
    ans=2*sum-dp[n];
    cout<<ans<<endl;


}
