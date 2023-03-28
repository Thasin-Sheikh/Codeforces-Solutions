
///*Bismillahir Rahmanir Rahim***///
/***Stay_Home_Stay_Safe***/
///**Author Thasin Sheikh**///
#include<bits/stdc++.h>
using namespace std;
#define MAX 35000
#define MOD 1000000007
#define PI 3.14159265359
#define makefast__  ios_base::sync_with_stdio(false);
using ll=long long int  ;
using dl =double;
const int N = 2e5 + 10;
ll aarray[2000+10];
ll barry[2000+10];
ll magic[101][101];
ll flag[10000];
vector<ll>primes;
bool prime[1000001];
int main()
{
    makefast__
    string str;
    ll a,b,c,d,e,f,x,y,k,t,A=0,B=0,L,j,i,l,r,m,n,C=0,ans=INT_MAX,sum=0,sum1=0;
    vector<ll>v,v1;
    queue<ll>qu;
    ll mod;
    cin>>n>>mod;
    for(i=1; i<=n; i++)
    {
        cin>>aarray[i];
    }
    for(i=1; i<=n; i++)
    {
        cin>>barry[i];
    }
    sort(barry,barry+n+1);
    sort(aarray,aarray+n+1);
    for(i=1;i<=n;i++)
    {
        x=barry[1]-aarray[i];
        if(x<0)
            x+=mod;
        for(j=1;j<=n;j++)
        {
            flag[j]=(aarray[j]+x)%mod;
        }
        sort(flag,flag+n+1);
        bool ok =true;
        for(j=1;j<=n;j++)
        {
            if(flag[j]!=barry[j])
            {
                ok=false;
                break;
            }
        }
        if(ok)
        {
            ans=min(ans,x);
        }
    }
cout<<ans<<endl;

    return 0;
}
