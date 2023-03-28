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
int aarray[N];
int magic[R][R];
vector<ll>primes;
bool check[1000001];
int large[10000005];
ll vis[N];
map<ll,ll>mp;
void solve()
{
    ll i,j,k,m,n,l,r,q,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>aarray[i];
    }
    ll col=-1;
    for(i=2;i<=n;i++)
    {
        k=abs(aarray[i]-aarray[i-1]);
        if(k==1)
        {
            continue;
        }
        else if(col==-1)
        {
            col=k;
        }
        else if(k!=col)
        {
            cout<<"NO"<<"\n";
            return ;
        }
    }
    if(col==0)
    {
        cout<<"NO"<<"\n";
        return ;
    }
    if(col==-1)
    {
        cout<<"YES"<<"\n";
        cout<<1000000000<<" "<<1<<"\n";
        return ;
    }
    for(i=2;i<=n;i++)
    {
        k=abs(aarray[i]-aarray[i-1]);
        if(k==col)
        {
            continue;
        }
        if(k!=1&&col!=k)
        {
            cout<<"NO"<<"\n";
            return ;
        }
        if(k==1&&(aarray[i-1]-1)/col==(aarray[i]-1)/col)
        {
            continue;
        }
        else
        {
            cout<<"NO"<<"\n";
            return ;
        }
    }
    cout<<"YES"<<"\n";
    cout<<1000000000<<" "<<col<<"\n";
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

