///*Bismillahir Rahmanir Rahim***///
/***Stay_Home_Stay_Safe***/
///**Author Thasin Sheikh**///
#include<bits/stdc++.h>
using namespace std;
#define MAX 1e6+10
#define MOD 1000000007
#define PI acos(-1)
#define R 510
#define MAXNUM 1000000000000000000
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
map<ll,ll>mp,pp;
void solve()
{
    ll i,j,k,m,n,l,r,q,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    vector<pair<ll,ll>>vc;
    cin>>n;
    ll ma=0;
    for(i=1; i<=n; i++)
    {
        cin>>aarray[i];
        mp[aarray[i]]++;
        if(mp[aarray[i]]==1)
        {
            v.push_back(aarray[i]);
        }
    }
    vector<ll>va;
    for(auto it:mp)
    {
        va.push_back(it.second);
        pp[it.second]++;

    }
    ans=0;
    sort(va.begin(),va.end());
    ll last=va.back();
    for(i=1;i<=last;i++)
    {
        ll ind=ll(va.size())-1;
        ll res=i;
        ll c=i;
        while(res%2==0&&ind>0)
        {
            c/=2;
            ind--;
            if(va[ind]<c)
            {
                break;
            }
            else res+=c;
        }
        ans=max(ans,res);
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
    t=1;
    while(t--)
    {
        solve();
    }
    return 0;
}
