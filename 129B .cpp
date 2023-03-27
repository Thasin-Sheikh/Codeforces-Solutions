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
vector<ll>v[N];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //tle khaite chas to endl use kor
    makefast__
    string str;
    ll i,j,n,m,k,t,a,b;
    cin>>n>>m;
    for(i=1;i<=m;i++)
    {
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    map<ll,ll>pp;
    ll ans=0;
    while(1)
    {
        ll flag=1;
        vector<ll>pas;
        for(i=1;i<=n;i++)
        {
            if(v[i].size()==1)
            {
                flag=0;
                pas.push_back(i);
            }
        }
        if(flag)
        {
            break;
        }
        else
        {
            while(pas.size()>0)
            {
                a=pas.back();
                b=v[a][0];
                v[a].pop_back();
                vector<ll>va;
                for(j=0;j<v[b].size();j++)
                {
                    if(v[b][j]!=a)
                    {
                        va.push_back(v[b][j]);
                    }
                }
                v[b].clear();
                v[b]=va;
                pas.pop_back();
            }
            ans++;

        }
    }
    cout<<ans<<"\n";
    return 0;
}

