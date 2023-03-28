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
set<pair<ll,ll>>tree;
ll newdis[3000];
ll getdis[3000];
void solve()
{
    ll i,j,k,m,n,l,r,q,p,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    tree.clear();
    cin>>n;
    cout<<'?'<<" "<<1<<endl;
    cout.flush();
    for(i=1; i<=n; i++)
    {
        cin>>getdis[i];
    }
    ll b=0,jo=0;
    for(i=1; i<=n; i++)
    {
        if(getdis[i]==1)
        {
            tree.insert({1,i});
        }
        if(getdis[i]%2)
        {
            b++;
        }
        else jo++;
    }
    if(b<jo)
    {

        for(i=2; i<=n; i++)
        {
            if(getdis[i]%2)
            {
                cout<<'?'<<" "<<i<<endl;
                 cout.flush();
                for(j=1; j<=n; j++)
                {
                    cin>>newdis[j];
                    if(newdis[j]==1)
                    {
                        tree.insert({min(i,j),max(i,j)});
                    }
                }
            }
        }
    }
    else
    {

        for(i=2; i<=n; i++)
        {
            if(getdis[i]%2==0)
            {
                cout<<'?'<<" "<<i<<endl;
                 cout.flush();
                for(j=1; j<=n; j++)
                {
                    cin>>newdis[j];
                    if(newdis[j]==1)
                    {
                        tree.insert({min(i,j),max(i,j)});

                    }
                }
            }

        }
    }
    cout<<"!"<<endl;
    cout.flush();
    for(auto it:tree)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }
    cout.flush();
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

