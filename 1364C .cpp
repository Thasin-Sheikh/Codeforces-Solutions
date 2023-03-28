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
ll ans[N];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //tle khaite chas to endl use kor
    makefast__
    string str;
    ll i,j,n,m,k,t;
    cin>>n;
    bool yes=true;
    set<ll>sl;
    for(i=1;i<=n;i++)
    {
        cin>>aarray[i];
        sl.insert(aarray[i]);
        if(aarray[i]>i)
        {
            yes=false;
        }
    }
    if(yes==false)
    {
        cout<<-1<<"\n";
    }
    if(sl.size()==1)
    {
        mp[aarray[1]]++;
    }
    for(i=1;i<=n+5;i++)
    {
        ans[i]=-1;
    }
    for(i=2;i<=n;i++)
    {
        if(aarray[i]!=aarray[i-1])
        {
            mp[aarray[i]]++;
            mp[aarray[i-1]]++;
            ans[i]=aarray[i-1];
        }
    }
    vector<ll>v;
    for(i=n;i>=0;i--)
    {
        if(mp[i]==0)
        {
            v.push_back(i);
        }
    }
    for(i=1;i<=n;i++)
    {
        if(ans[i]==-1)
        {
            ans[i]=v.back();
            v.pop_back();
        }
    }
    for(i=1;i<=n;i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}

