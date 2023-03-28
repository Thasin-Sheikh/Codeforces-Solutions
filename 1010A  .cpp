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
using ll=long long int ;
using dl =double;
using ld=long double;
using ull=unsigned long long;
const long N = 3e5 + 10;
ll aarray[N];
ll magic[R][R];
vector<ll>primes;
bool check[1000001];
ll vis[N];
map<ll,ll>mp;
dl w;
ll n;
dl land[2000],take_off[2000];
dl ok(dl h)
{
    ll i,j;
    dl k;
    for(i=1; i<=n; i++)
    {
        if(i==1)
        {
            h-=h/take_off[i];
        }
        else
        {
            h-=h/land[i];
            h-=h/take_off[i];
        }
        if(h<w)
        {
            return false;
        }
    }
    h-=h/land[1];
    if(h<w)
    {
        return false;
    }
    return true;

}
void solve()
{
    ll i,j,k,m,q,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n>>w;
    for(i=1; i<=n; i++)
    {
        cin>>take_off[i];
    }
    for(i=1; i<=n; i++)
    {
        cin>>land[i];
    }
    dl l=1.00,r=10000000000000.00;
    dl ans=10000000000.0;
    ll tm=101;
    while(tm--)
    {
        dl mid=dl((l+r))/2;
        if(ok(mid+w))
        {
            r=mid;
            ans=min(ans,mid);
        }
        else
        {
            l=mid;
        }
    }
    /*dl al=ans-1;
    dl ar=dl(ans);
    dl hu=ans;
    while(al<=ar)
    {
        dl mid=(al+ar)/2;
        if(ok(mid+w))
        {
            ar=mid-0.000001;
            hu=min(mid,hu);
        }
        else
        {
            al=mid+0.000001;
        }
    }
    if(hu==10000000000)
    {
        cout<<-1<<"\n";
        return ;
    }*/
    if(ans==10000000000)
    {
        cout<<-1<<"\n";
        return ;
    }
    cout<<setprecision(15)<<ans<<"\n";

}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //tle khaite chas to endl use kor
    makefast__
    string str;
    ll i,j,n,m,k,t;
    t=1;
    while(t--)
    {
        solve();
    }
    return 0;
}

