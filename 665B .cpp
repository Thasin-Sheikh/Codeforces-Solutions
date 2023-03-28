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
map<ll,ll>mp,pp;
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //tle khaite chas to endl use kor
    makefast__
    string str;
    ll i,j,n,m,k,t;
    cin>>n>>m>>k;
    for(i=1; i<=k; i++)
    {
        cin>>aarray[i];
        mp[aarray[i]]=i;
    }
    ll sum=0,a;
    for(i=1; i<=n; i++)
    {
        ll b=0;
        for(j=1; j<=m; j++)
        {
            cin>>t;
            sum+=mp[t];
            a=mp[t];
            for(ll ii=a;ii>1;ii--)
            {
                aarray[ii]=aarray[ii-1];
                mp[aarray[ii-1]]=ii;
            }
            aarray[1]=t;
            mp[t]=1;
        }
    }
    cout<<sum<<"\n";

    return 0;
}




