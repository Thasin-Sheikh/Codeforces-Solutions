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
    ll i,j,n,m=0,k,t=0,a,b,d,pa;
    cin>>n;
    ll tm=0,e=0;
    cin>>a>>b;
    e+=b;
    m=b;
    pa=a;
    t=a;
    for(i=2;i<=n;i++)
    {
        cin>>a>>b;
        d=a-pa;
        if(d>0)
        {
            ll f=min(e,d);
            e-=f;
        }
        pa=a;
        //cout<<e<<endl;
        e+=b;
        // cout<<e<<endl;
        m=max(m,e);
        if(i==n)
        {
            t=a;
        }
    }
    //cout<<e<<endl;
    cout<<t+e<<" "<<m<<"\n";

    return 0;
}

