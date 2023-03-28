///*Bismillahir Rahmanir Rahim***///
/***Stay_Home_Stay_Safe***/
///**Author Thasin Sheikh**///
#include<bits/stdc++.h>
using namespace std;
#define MAX 1e6+10
#define MOD 1000000007
#define PI 3.14159265359
#define makefast__  ios_base::sync_with_stdio(false);
using ll=long long int  ;
using dl =double;
const int N = 2e5 + 10;
ll aarray[200000+10];
ll magic[101][101];
vector<ll>primes;
bool prime[1000001];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll a,b,c,d,e,f,x,y,k,t,q,p,A=0,mod,B=0,L,j,i,l,r,m,n,C=0,ans=0,sum=0,sum1=0;
    vector<ll>v,v1;
    queue<ll>qu;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ans=1;
        ll dp[100001];
        for(i=1; i<=n; i++)
        {
            cin>>aarray[i];
            dp[i]=1;
        }
        for(i=2; i<=n; i++)
        {
            x=0;
            for(j=1; j*j<=i; j++)
            {
                if(i%j==0)
                {
                    if(aarray[j]<aarray[i])
                        x=max(x,dp[j]);
                    if(aarray[i/j]<aarray[i])
                        x=max(x,dp[i/j]);
                }

            }
            dp[i]+=x;
            ans=max(ans,dp[i]);
        }
        cout<<ans<<endl;
    }

    return 0;
}


