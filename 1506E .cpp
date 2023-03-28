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
ll aarray[N];
ll magic[R][R];
vector<ll>primes;
bool check[1000001];
ll vis[N];
ll mp[N];
void solve()
{
    ll i,j,k,m,n,l,r,q,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n;
    ll mi[n+1],ma[n+1];
    for(i=0;i<=n+1;i++)
    {
        mp[i]=0;
    }
    for(i=1;i<=n;i++)
    {
        cin>>aarray[i];
        mp[aarray[i]]++;
        if(mp[aarray[i]]==1)
        {
            mi[i]=ma[i]=aarray[i];
        }
        else mi[i]=ma[i]=-1;
    }
    for(i=n;i>=1;i--)
    {
        if(mp[i]==0)
        {
            v.push_back(i);
        }
    }
    set<ll>s;
    for(i=0;i<v.size();i++)
    {
        s.insert(v[i]);
    }
    for(i=1;i<=n;i++)
    {
        if(mi[i]==-1)
        {
            mi[i]=v.back();
            v.pop_back();
        }
    }
    aarray[0]=0;
    for(i=1;i<=n;i++)
    {
        if(aarray[i]>aarray[i-1])
        {
            ma[i]=aarray[i];
        }
        else
        {
            auto it=s.upper_bound(aarray[i]);
            it--;
            ma[i]=*it;
            s.erase(*it);

        }

    }
    for(i=1;i<=n;i++)
    {
        cout<<mi[i]<<" ";
    }
    cout<<"\n";
    for(i=1;i<=n;i++)
    {
        cout<<ma[i]<<" ";
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
    cin>>t;
    while(t--)
    {

        solve();
    }

    return 0;
}


