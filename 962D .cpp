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
const long MAXN=5e5+10;
ll aarray[N];
ll magic[R][R];
vector<ll>primes;
bool check[1000001];
ll large[10000005];
ll vis[N];
map<ll,ll>mp;
typedef pair<ll,ll>P;
priority_queue<P,vector<P>,greater<P>>pq;
void solve()
{
    ll i,j,k,m,n,l,r,q,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>l;
        pq.push({l,i});
    }
    while(!pq.empty())
    {
        if(pq.size()>1)
        {
            pair<ll,ll>x=pq.top();
            pq.pop();
            pair<ll,ll>y=pq.top();
            if(x.first==y.first)
            {
                pq.pop();
                k=2*(x.first);
                pq.push({k,y.second});
            }
            else
            {
                aarray[x.second]=x.first;
            }
        }
        else
        {
            pair<ll,ll>x=pq.top();
            pq.pop();
            aarray[x.second]=x.first;
        }
    }
    for(i=1; i<=n; i++)
    {
        if(aarray[i]>0)
        {
            sum++;
        }
    }
    cout<<sum<<"\n";
    for(i=1; i<=n; i++)
    {
        if(aarray[i]>0)
        {
            cout<<aarray[i]<<" ";
        }
    }
    cout<<"\n";
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


