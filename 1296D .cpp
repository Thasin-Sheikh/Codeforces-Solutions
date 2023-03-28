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
    ll a,b,i,j,n,m,k,t,ans=0,p,x,y;
    cin>>n>>a>>b>>k;
    vector<ll>v,vv;
    t=a+b;
    for(i=1; i<=n; i++)
    {
        cin>>m;
        if((m%t<=a&&m%t!=0)||m<=a)
        {
            ans++;
        }
        else
        {
            v.push_back(m);
        }
    }
    for(i=0; i<v.size(); i++)
    {
        x=v[i]/t;
        if(v[i]%t)
            x++;
        ll t1,t2;
        t1=x*a;
        t2=(x-1)*b;
        y=v[i]-(t1+t2);
        p=y/a;
        if(y%a)
        {
            p++;
        }
        vv.push_back(p);
    }
    sort(vv.begin(),vv.end());
    for(i=0; i<vv.size(); i++)
    {
        if(k>=vv[i])
        {
            ans++;
            k-=vv[i];
        }
    }
    cout<<ans<<"\n";
    return 0;
}




