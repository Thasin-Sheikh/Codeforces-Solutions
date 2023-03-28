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
    ll f=0,o=0,b=0;
    for(i=1;i<=n;i++)
    {
        cin>>aarray[i];
        if(aarray[i]==1)
        {
            f=1;
            o++;
        }
        if(aarray[i]%2)
        {
            b=1;
        }
    }
    if(n==1)
    {
        if(aarray[1]==1)
        {
            cout<<0<<"\n";
        }
        else cout<<-1<<"\n";
        return 0;
    }
    if(f)
    {
        cout<<n-o<<"\n";
        return 0;
    }
    ll l,r;
    l=-1,r=-1;
    ll pre=INT_MAX;
    for(i=1;i<n;i++)
    {
        ll num=aarray[i];
        for(j=i+1;j<=n;j++)
        {
            num=__gcd(num,aarray[j]);
            if(num==1)
            {
                ll d=j-i;
                if(d<pre)
                {
                    pre=d;
                }
            }
        }
    }
    if(pre==INT_MAX)
    {
        cout<<-1<<"\n";
        return 0;
    }
    cout<<pre+(n-1)<<"\n";

    return 0;
}

