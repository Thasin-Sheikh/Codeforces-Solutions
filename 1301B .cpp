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
map<ll,ll>mp;
ll pans=1000000000;
vector<ll>v,va;
void solve()
{
    ll i,j,k,m,n,l,r,q,ans,sum=0;
    string str;
    bool yes=true;
    cin>>n;
    for(i=1;i<=n;i++)
    {
       cin>>l;
        v.push_back(l);
    }
    v.push_back(INT_MAX);
    for(i=0;i<v.size()-1;i++)
    {
        if(i==0)
        {

            if(v[i+1]==-1&&v[i]!=-1)
            {
                va.push_back(v[i]);
            }
        }
        else
        {
            if(v[i-1]==-1&&v[i]!=-1)
            {
                va.push_back(v[i]);
            }
            else if(v[i+1]==-1&&v[i]!=-1)
            {
                va.push_back(v[i]);
            }
        }
    }
    k=100;
    sort(va.begin(),va.end());
    if(va.size())
    k=(va[0]+va[va.size()-1])/2;
    for(i=0;i<v.size();i++)
    {
        if(v[i]==-1)
        {
            v[i]=k;
        }
    }
    v.pop_back();
    for(i=0;i<v.size()-1;i++)
    {
        sum=max(sum,abs(v[i]-v[i+1]));
    }
    cout<<sum<<" "<<k<<"\n";
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
        v.clear();
        va.clear();
        solve();
    }
    return 0;
}


