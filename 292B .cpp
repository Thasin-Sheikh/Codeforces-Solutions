///*Bismillahir Rahmanir Rahim***///
/***Stay_Home_Stay_Safe***/
///**Author Thasin Sheikh**///
#include<bits/stdc++.h>
using namespace std;
#define MAX 1e6+10
#define MOD 1000000007
#define PI 3.14159265359
#define makefast__  ios_base::sync_with_stdio(false);
using ll=long long int  ;
using dl =double;
const int N = 2e5 + 10;
ll aarray[200000+10];
ll magic[101][101];
vector<ll>primes;
bool prime[1000001];
vector<ll>v[200000+10];
ll vis[200000+10];
ll dfs(ll n)
{
    vis[n]=0;
    ll i;
    for(i=0; i<v[n].size(); i++)
    {
        if(vis[v[n][i]]==0)
        {
            dfs(v[n][i]);
        }
    }
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,k,t,a,b;
    cin>>n>>m;
    for(i=1; i<=m; i++)
    {
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    //for ring
    ll f=1;
    for(i=1; i<=n; i++)
    {
        if(v[i].size()!=2)
        {
            f=0;
            break;
        }
    }
    if(n==m&&f)
    {
        cout<<"ring topology"<<endl;
        return 0;
    }
    // for star
    bool ok=false;
    ll c=0;
    for(i=1; i<=n; i++)
    {
        if(v[i].size()==n-1)
        {
            ok=true;
        }
        if(v[i].size()!=1)
        {
            c++;
        }
    }
    if(ok&&c==1&&n==m+1)
    {
        cout<<"star topology"<<endl;
        return 0;
    }
    ll two=0,one=0;
    for(i=1; i<=n; i++)
    {
        if(v[i].size()==2)
        {
            two++;
        }
        if(v[i].size()==1)
        {
            one++;
        }
    }
    if(one==2&&two==n-2)
    {
        cout<<"bus topology"<<endl;
        return 0;

    }
    cout<<"unknown topology"<<endl;
    return 0;
}


