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
int dx[] = {-1 , 0 , 1 , 0};
int dy[] = {0 , 1 , 0 , -1};
ll vis[N];
map<ll,ll>mp;
ll val[4*100010];
void build(ll node,ll st,ll en,ll dis)
{
    if(st==en)
    {
        val[node]=aarray[st];
        return ;

    }
    ll lft=2*node;
    ll rght=2*node+1;
    ll mid=(st+en)/2;
    dis--;
    build(lft,st,mid,dis);
    build(rght,mid+1,en,dis);
    if(dis%2==0)
    {
        //cout<<lft<<" "<<rght<<endl;
        val[node]=(val[lft]^val[rght]);
    }
    else
    {
        //cout<<lft<<" "<<rght<<endl;
        val[node]=(val[lft]|val[rght]);
    }
    //cout<<node<<" "<<val[node]<<endl;
    return ;
}
void update(ll node,ll st,ll en,ll pos,ll va,ll dis)
{
    if(st==en)
    {
        aarray[st]=va;
        val[node]=va;
        return ;

    }
    ll lft=2*node;
    ll rght=2*node+1;
    ll mid=(st+en)/2;
    dis--;
    if(pos<=mid)
    update(lft,st,mid,pos,va,dis);
    else
    update(rght,mid+1,en,pos,va,dis);
    if(dis%2==0)
    {
        //cout<<lft<<" "<<rght<<endl;
        val[node]=(val[lft]^val[rght]);
    }
    else
    {
        //cout<<lft<<" "<<rght<<endl;
        val[node]=(val[lft]|val[rght]);
    }
    return ;
    //cout<<node<<" "<<val[node]<<endl;
}
void solve()
{
    ll i,j,k,m,n,l,r,q,p,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n>>q;
    for(i=1;i<=(1LL<<n);i++)
    {
        cin>>aarray[i];
    }
    k=(1LL<<n);
    build(1LL,1LL,k,n+1);
    ll b;
    while(q--)
    {
        cin>>p>>b;
        update(1LL,1LL,k,p,b,n+1);
        cout<<val[1]<<"\n";
    }
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //tle khaite chas to endl use kor
    //no test case in interactive ,check it idiot
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

