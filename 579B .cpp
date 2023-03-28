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
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //tle khaite chas to endl use kor
    makefast__
    string str;
    ll i,j,n,m,k,t,a;
    cin>>n;
    ll b;
    vector<pair<ll,pair<ll,ll>>>v;
    for(i=2;i<=n*2;i++)
    {
        for(j=1;j<i;j++)
        {
            cin>>b;
            v.push_back({b,{i,j}});
        }
    }
    sort(v.rbegin(),v.rend());

    for(i=0;i<v.size();i++)
    {
        if(mp[v[i].second.first]||mp[v[i].second.second])
        {
            continue;
        }
        mp[v[i].second.first]=v[i].second.second;
        mp[v[i].second.second]=v[i].second.first;
    }
    for(i=1;i<=2*n;i++)
    {
        cout<<mp[i]<<" ";
    }
    cout<<"\n";
    return 0;
}




