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
    ll i,j,n,m,k,t;
    vector<ll>v;
    ll ans=0,sum=0;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            cin>>magic[i][j];
        }
    }
    for(i=1;i<=5;i++)
    {
        v.push_back(i);
    }
    do
    {
        sum=0;
        for(i=0;i<v.size()-1;i++)
        {
            sum+=magic[v[i]][v[i+1]];
            sum+=magic[v[i+1]][v[i]];
            if(i==2||i==3)
            {
                sum+=magic[v[i]][v[i+1]];
                sum+=magic[v[i+1]][v[i]];
            }
        }
        ans=max(ans,sum);
    }
    while(next_permutation(v.begin(),v.end()));
    cout<<ans<<"\n";

    return 0;
}
