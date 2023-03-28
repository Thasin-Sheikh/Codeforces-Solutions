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
void solve()
{
    ll i,j,n,m,x,k,l,ans=0,sum=0;
    vector<ll>a,b;
    cin>>n>>x;
    for(i=1;i<=n;i++)
    {
        cin>>m;
        a.push_back(m);
    }
    b=a;
    sort(b.begin(),b.end());
    if(a==b)
    {
        cout<<0<<"\n";
        return ;
    }
    for(i=0;i<a.size();i++)
    {
        if(a[i]>x)
        {
            swap(a[i],x);
            ans++;
        }
        if(is_sorted(a.begin(),a.end()))
        {
            break;
        }
    }
    if(is_sorted(a.begin(),a.end()))
    {
        cout<<ans<<"\n";
    }
    else cout<<-1<<"\n";
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //tle khaite chas to endl use kor
    makefast__
    string str;
    ll i,j,n,m,k,t;
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}

