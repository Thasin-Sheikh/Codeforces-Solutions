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
    set<ll>s;
    for(i=1;i<=n;i++)
    {
        cin>>aarray[i];
    }
    for(i=k+1;i<=n;i++)
    {
        if(aarray[i]!=aarray[k])
        {
            cout<<-1<<"\n";
            return 0;
        }
    }
    for(i=n;i>=1;i--)
    {
        if(aarray[i]!=aarray[k])
        {
            cout<<i<<"\n";
            return 0;
        }
    }
    cout<<0<<"\n";

    return 0;
}

