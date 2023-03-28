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
    cin>>n>>k;
    for(i=1;i<=n;i++)
    {
        cin>>aarray[i];
        mp[aarray[i]]++;
    }
    sort(aarray+1,aarray+n+1);
    for(i=1;i<n;i++)
    {
        if(mp[aarray[i]]==0)
        {
            continue;
        }
        if(aarray[i]<aarray[i+1])
        {
            t=aarray[i]+k;
            if(t>=aarray[i+1])
            {

                mp[aarray[i]]=0;

            }
        }
    }
    ll ans=0;
    for(i=1;i<=n;i++)
    {
        ans+=mp[aarray[i]];
        mp[aarray[i]]=0;
    }
    cout<<ans<<"\n";
    return 0;
}

