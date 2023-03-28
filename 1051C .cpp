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
map<ll,char>aa;
void solve()
{
    ll i,j,k,m,n,l,r,q,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n;
    char ans[n+5];
    set<ll>s;
    for(i=1; i<=n; i++)
    {
        cin>>aarray[i];
        mp[aarray[i]]++;
        aa[aarray[i]]='0';
    }
    for(i=1; i<=n; i++)
    {
        if(mp[aarray[i]]==1)
        {
            v.push_back(aarray[i]);
        }
    }
    if(v.size()%2&&v.size()==n)
    {
        cout<<"NO"<<"\n";
        return ;
    }
    ll a,b,sz;
    sz=v.size();
    for(i=0;i<v.size();i++)
    {
        if(i<sz/2)
        {
            aa[v[i]]='A';
        }
        else aa[v[i]]='B';
    }
   // cout<<sz<<endl;
    if(sz%2)
    {
        for(i=1;i<=n;i++)
        {
            if(mp[aarray[i]]>2)
            {
                aa[aarray[i]]='A';
                sz++;
                break;
            }
        }
    }
    if(sz%2==0)
    {
        cout<<"YES"<<"\n";
        for(i=1;i<=n;i++)
        {
            if(aa[aarray[i]]=='0')
            {
                cout<<'B';
            }
            else
            {
                cout<<aa[aarray[i]];
                aa[aarray[i]]='0';
            }
        }
        return ;
    }
    cout<<"NO"<<"\n";
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
