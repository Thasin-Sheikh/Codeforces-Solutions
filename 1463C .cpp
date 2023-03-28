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
bool check[1000001];
ll vis[N];
map<ll,ll>mp;
void solve()
{
    ll i,j,k,m,n,l,r,ans=0,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n;
    ll t[n+5],x[n+5],pos=0,dis=0;
    ll p[n+10];
    t[n+1]=10000000000000000;
    for(i=1; i<=n; i++)
    {
        cin>>t[i]>>x[i];
    }
    for(i=1; i<=n; i++)
    {
        if(i==1)
        {
            dis=x[i]-pos;
            p[i]=pos;
        }
        else
        {
            k=min(abs(dis),t[i]-t[i-1]);
            if(dis<0)
            {
                pos-=k;
                dis+=k;
            }
            else
            {
                pos+=k;
                dis-=k;
            }
            p[i]=pos;
            if(dis==0)
            {
                //cout<<pos<<endl;
                dis=x[i]-pos;
            }
        }
        //cout<<i<<" "<<dis<<" "<<pos<<endl;
    }
    if(dis!=0)
        p[n+1]=pos+dis;
    for(i=1; i<=n; i++)
    {
        if(x[i]>=p[i]&&x[i]<=p[i+1]||x[i]<=p[i]&&x[i]>=p[i+1])
        {
            ans++;
        }
    }
    cout<<ans<<"\n";
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //tle khaite chas to endl use kor
    makefast__
    string str;
    ll i,j,n,m,k,t;
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}
