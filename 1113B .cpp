///*Bismillahir Rahmanir Rahim***///
/***Stay_Home_Stay_Safe***/
///**Author Thasin Sheikh**///
#include<bits/stdc++.h>
using namespace std;
#define MAX 1e6+10
#define MOD 1000000007
#define PI acos(-1)
#define R 510
#define makefast__  ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using ll=long long int  ;
using dl =double;
using ull=unsigned long long;
const long N = 3e5 + 10;
ll aarray[N];
ll magic[R][R];
vector<ll>primes;
bool prime[1001];
ll vis[N];
map<ll,ll>mp;
void seive()
{
    ll i,j;
    for(i=2; i<=110; i++)
    {
        prime[i]=true;
    }
    prime[0]=prime[1]=false;
    for(i=2; i<=110; i++)
    {
        if(prime[i])
        {
            for(j=2*i; j<=110; j+=i)
            {
                prime[j]=false;
            }
        }
    }

}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //tle khaite chas to endl use kor
    makefast__
    string str;
    ll i,j,n,m,k=INT_MAX,t;
    cin>>n;
    ll ans=0;
    for(i=1; i<=n; i++)
    {
        cin>>aarray[i];
        ans+=aarray[i];
        k=min(k,aarray[i]);
    }
    m=ans;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=aarray[i];j++)
        {
            if(aarray[i]%j==0)
            {
                t=m-k-aarray[i];
                t+=k*j+(aarray[i]/j);
                ans=min(ans,t);

            }
        }
    }
    cout<<ans<<"\n";
    return 0;
}
