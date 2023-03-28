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
using ll=long long int ;
using dl =double;
using ld=long double;
using ull=unsigned long long;
const long N = 3e5 + 10;
const long MAXN=5e5+10;
ll aarray[N];
ll magic[R][R];
vector<ll>primes;
bool check[1000001];
ll large[10000005];
ll vis[N];
map<ll,ll>mp;
vector<ll>st[30];
void solve()
{
    ll i,j,k,m,n,l,r,q,p,ans,sum=0;
    string str,s,t;
    bool yes=true;
    vector<ll>v;
    cin>>s>>t;
    ll sz=s.size();
    ll tz=t.size();
    ll cnts[30]= {0};
    for(i=0;i<26;i++)
    {
        st[i].clear();
    }
    for(i=0; i<sz; i++)
    {
        cnts[s[i]-'a']++;
        st[s[i]-'a'].push_back(i);
    }
    for(i=0; i<tz; i++)
    {
        if(cnts[t[i]-'a']==0)
        {
            cout<<-1<<"\n";
            return ;
        }
    }
    j=0,i=0;
    ll pos=-1;
    ans=1;
    for(i=0;i<tz;i++)
    {
        l=upper_bound(st[t[i]-'a'].begin(),st[t[i]-'a'].end(),pos)-st[t[i]-'a'].begin();
        if(l==st[t[i]-'a'].size())
        {
            ans++;
            pos=st[t[i]-'a'][0];
        }
        else
        {
            pos=st[t[i]-'a'][l];
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


