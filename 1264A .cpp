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
using ull=unsigned long long;
const long N = 4e5 + 10;
ll aarray[N];
ll magic[R][R];
vector<ll>primes;
bool check[1000001];
ll vis[N];
map<ll,ll>mp;
void solve()
{
    ll i,j,k,m,n,l,r,q,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>aarray[i];
        mp[aarray[i]]++;
        if(mp[aarray[i]]==1)
        {
            v.push_back(aarray[i]);
        }
    }
    if(n<6)
    {
        cout<<0<<" "<<0<<" "<<0<<"\n";
        return ;
    }
    ll a=mp[v[0]];
    vector<ll>add;
    for(i=0;i<v.size();i++)
    {
        if(sum+mp[v[i]]<=n/2)
        {
            sum+=mp[v[i]];
            add.push_back(mp[v[i]]);
        }
        else break;
    }
    ll g=0,s=0,b=0;
    g=a;
    if(add.size()<3)
    {
        cout<<0<<" "<<0<<" "<<0<<"\n";
        return ;
    }
    reverse(add.begin(),add.end());
    add.pop_back();
    while(add.size()>0)
    {
        if(s+add.back()>g)
        {
            s+=add.back();
            add.pop_back();
            break;
        }
        else
        {
            s+=add.back();
            add.pop_back();
        }
    }
    for(auto it:add)
    {
        b+=it;
    }
    if(g<s&&g<b&&g&&b&&s)
    {
        cout<<g<<" "<<s<<" "<<b<<"\n";
    }
    else cout<<0<<" "<<0<<" "<<0<<"\n";
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
        mp.clear();
        solve();
    }
    return 0;
}
