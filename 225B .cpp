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
const long maxn=5e5+10;
ll aarray[N];
ll magic[R][R];
vector<ll>primes;
bool check[1000001];
ll large[10000005];
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};
ll vis[N];
map<ll,ll>mp;
vector<ll>cur;
void solve()
{
    ll i,j,k,m,n,l,r,q,p,ans,sum;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>sum>>k;
    if(k<=32)
    {
        vis[k]=1;
        vector<ll>cor;
        cor.push_back(0);
        for(i=k+1;;i++)
        {
            for(j=i-1;j>=i-k;j--)
            {
                vis[i]+=vis[j];
            }
            if(vis[i]>sum)
            {
                break;
            }
        }
        i--;
        for(;i>=k;i--)
        {
            if(vis[i]<=sum)
            {
                sum-=vis[i];
                cor.push_back(vis[i]);
            }
            if(!sum)
            {
                break;
            }
        }
        cout<<cor.size()<<"\n";
        for(auto it:cor)
        {
            cout<<it<<" ";
        }
    }
    else
    {
        while(1)
        {
            v.push_back(1LL<<i);
            if((1LL<<i)>1000000000)
            {
                break;
            }
            i++;
        }
        vector<ll>cor;
        cor.push_back(0);
        for(i=v.size()-1; i>=0; i--)
        {
            if(v[i]<=sum)
            {
                sum-=v[i];
                cor.push_back(v[i]);
            }
            if(sum==0)
            {
                break;
            }
        }
        cout<<cor.size()<<"\n";
        for(auto it:cor)
        {
            cout<<it<<" ";
        }
    }
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
