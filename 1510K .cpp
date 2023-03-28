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
void solve()
{
    ll i,j,k,m,n,l,r,q,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v,vc,avc;
    cin>>n;
    for(i=1; i<=2*n; i++)
    {
        cin>>l;
        v.push_back(l);
    }
    vc=v;
    avc=v;
    sort(vc.begin(),vc.end());
    ll tm=n;
    ll c=1;
    if(v==vc)
    {
        cout<<0<<"\n";
        return ;
    }
    ans=INT_MAX;
    while(tm--)
    {
        if(c%2)
        {
            c++;
            for(i=0; i<v.size()-1; i+=2)
            {
                swap(v[i],v[i+1]);
            }
        }
        else
        {
            c++;
            for(i=0; i<n; i++)
            {
                swap(v[i],v[n+i]);
            }
        }
        if(v==vc)
        {
            ans=min(ans,c-1);
            break;
        }
    }
    tm=n;
    c=1;
    v.clear();
    v=avc;
    while(tm--)
    {
        if(c%2==0)
        {
            c++;
            for(i=0; i<v.size()-1; i+=2)
            {
                swap(v[i],v[i+1]);
            }
        }
        else
        {
            c++;
            for(i=0; i<n; i++)
            {
                swap(v[i],v[n+i]);
            }
        }
        if(v==vc)
        {
            ans=min(ans,c-1);
            break;
        }
    }
    if(ans==INT_MAX)
    cout<<-1<<"\n";
    else cout<<ans<<"\n";
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

