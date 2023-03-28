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
    ll i,j,n,m,l,k,t;
    dl ans;
    cin>>n>>l;
    for(i=0;i<n;i++)
    {
        cin>>aarray[i];
    }
    sort(aarray,aarray+n);
    if(aarray[0]!=0)
    {
        ans=aarray[0];
    }
    else
        ans=0;
    for(i=1;i<n;i++)
    {
        k=aarray[i]-aarray[i-1];
        dl b=dl(k)/2;
        ans=max(ans,b);
    }
    if(aarray[n-1]!=l)
    {
        ans=max(ans,dl(l-aarray[n-1]));
    }
    cout<<setprecision(15)<<ans<<"\n";
    return 0;
}

