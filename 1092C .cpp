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
const long N = 3e5 + 10;
ll aarray[N];
ll magic[R][R];
vector<ll>primes;
bool check[1000001];
ll vis[N];
map<ll,ll>mp;
ll n;
void solve()
{
    ll i,j,k,m,l,r,q,ans,sum=0;
    string str,a,b,c,d;
    bool yes=true;
    vector<string>v;
    cin>>n;
    ll cn=0;
    for(i=1; i<=2*n-2; i++)
    {
        cin>>str;
        v.push_back(str);
        if(str.length()==n-1)
        {
            if(cn==0)
            {
                a=str;
                cn++;
            }
            else b=str;
        }
    }
    ll len=n-1;
    c=a;
    c+=b[len-1];
    d=b;
    d+=a[len-1];
    ll cur=0;
    map<string,char>mc;
    for(i=0; i<v.size(); i++)
    {
        ll sz=v[i].size();
        string s;
        s=c.substr(0,sz);
        if(s==v[i])
        {
            cur++;
            mc[v[i]]='P';
        }
        else
        {
            k=n-sz;
            s=c.substr(k,sz);
            if(s==v[i])
            {
                cur++;
                mc[v[i]]='S';
            }
        }
    }
    if(cur==2*n-2)
    {
        for(i=0; i<v.size(); i++)
        {
            cout<<mc[v[i]];
            if(mc[v[i]]=='P')
            {
                mc[v[i]]='S';
            }
            else mc[v[i]]='P';
        }
        cout<<"\n";
        return ;
    }
    mc.clear();
    cur=0;
    for(i=0; i<v.size(); i++)
    {
        ll sz=v[i].size();
        string s;
        s=d.substr(0,sz);
        if(s==v[i])
        {
            cur++;
            mc[v[i]]='P';
        }
        else
        {
            k=n-sz;
            s=d.substr(k,sz);
            if(s==v[i])
            {
                cur++;
                mc[v[i]]='S';
            }
        }
    }
    for(i=0; i<v.size(); i++)
    {
        cout<<mc[v[i]];
        if(mc[v[i]]=='P')
            {
                mc[v[i]]='S';
            }
            else mc[v[i]]='P';
    }
    cout<<"\n";
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //tle khaite chas to endl use kor
    makefast__
    string str;
    ll i,j,n,m,k,t;
    t=1;
    while(t--)
    {
        solve();
    }
    return 0;
}
