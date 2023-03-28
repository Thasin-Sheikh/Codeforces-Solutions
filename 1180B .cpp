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
    cin>>n;
    ll pg=0,ng=0;
    vector<pair<ll,ll>>a,b;
    for(i=1; i<=n; i++)
    {
        cin>>m;
        if(m<0)
        {
            m=-m-1;
        }
        a.push_back({m,i});
    }
    sort(a.begin(),a.end());
    if(n%2)
    {
        for(i=0; i<a.size()-1; i++)
        {
            a[i].first=-a[i].first-1;
        }
    }
    else
    {

        for(i=0; i<a.size(); i++)
        {
            a[i].first=-a[i].first-1;
        }
    }
    for(i=0; i<a.size(); i++)
    {
        aarray[a[i].second]=a[i].first;
    }
    for(i=1; i<=n; i++)
    {
        cout<<aarray[i]<<" ";
    }
    cout<<"\n";
    return 0;
}

