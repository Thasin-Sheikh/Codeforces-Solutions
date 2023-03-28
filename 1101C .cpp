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
map<pair<ll,ll>,vector<ll>>mp;
void solve()
{
    ll i,j,k,m,n,q,ans,sum=0;
    string str;
    bool yes=false;
    vector<pair<ll,ll>>v;
    cin>>n;
    ll l[n+1],r[n+1];
    for(i=1;i<=n;i++)
    {
        cin>>l[i]>>r[i];
        v.push_back({l[i],r[i]});
    }
    sort(v.begin(),v.end());
    ll ma=0;
    for(i=0;i<v.size()-1;i++)
    {
        ma=max(ma,v[i].second);
        k=v[i+1].first;
        if(ma<k)
        {
            yes=true;
            for(j=0;j<=i;j++)
            {
                mp[{v[j].first,v[j].second}].push_back(1);
            }
            for(j=i+1;j<v.size();j++)
            {
                mp[{v[j].first,v[j].second}].push_back(2);

            }
            break;
        }
    }
    if(!yes)
    {
        cout<<-1<<"\n";
        return ;
    }
    for(i=1;i<=n;i++)
    {
        cout<<mp[{l[i],r[i]}].back()<<" ";
        mp[{l[i],r[i]}].pop_back();

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
        mp.clear();
        solve();
    }

    return 0;
}


