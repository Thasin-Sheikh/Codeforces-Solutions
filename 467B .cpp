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
    cin>>n>>m>>k;
    for(i=1;i<=m+1;i++)
    {
        cin>>aarray[i];
    }
    vector<ll>v;
    ll fd=aarray[m+1];
    while(fd)
    {
        v.push_back(fd%2);
        fd/=2;

    }
    ll ku=v.size();
    while(v.size()<32)
    {
        v.push_back(0);
    }
    ll ans=0;
    for(i=1;i<=m;i++)
    {
        ll p=aarray[i];
        vector<ll>ck;
        while(p)
        {
            ck.push_back(p%2);
            p/=2;
        }
        ll c=0;
        ll jb=ck.size();
        while(ck.size()<32)
        {
            ck.push_back(0);
        }
        for(j=0;j<v.size();j++)
        {
            if(v[j]!=ck[j])
            {
                c++;
            }
        }
        if(c<=k)
        {
           // cout<<c<<endl;
            //cout<<aarray[i]<<endl;
            ans++;
        }
    }
    cout<<ans<<"\n";

    return 0;
}

