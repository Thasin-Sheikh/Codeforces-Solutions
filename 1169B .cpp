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
ll x[N],y[N];
void solve()
{
    ll i,j,k,m,n,l,r,q,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    ll a,b;
    cin>>n>>m;
    for(i=1; i<=m; i++)
    {
        cin>>x[i]>>y[i];
    }
    ll tm=2;
    while(tm)
    {
        if(tm==2)
            a=x[1];
        else a=y[1];
        b=-1;
        for(i=1; i<=m; i++)
        {
            if(x[i]!=a&&y[i]!=a)
            {
                b=x[i];
                //cout<<a<<" "<<b<<endl;
                ll c=-1;
                for(j=1; j<=m; j++)
                {
                    if(x[j]!=a&&x[j]!=b&&y[j]!=a&&y[j]!=b)
                    {
                        c=0;
                        break;
                    }
                }
                if(c==-1)
                {
                    cout<<"YES"<<"\n";
                    return ;
                }
                else
                {
                    b=y[i];
                    //cout<<a<<" "<<b<<endl;
                    ll c=-1;
                    for(j=1; j<=m; j++)
                    {
                        if(x[j]!=a&&x[j]!=b&&y[j]!=a&&y[j]!=b)
                        {
                            c=0;
                            break;
                        }
                    }
                    if(c==-1)
                    {
                        cout<<"YES"<<"\n";
                        return ;
                    }
                }
                break;
            }
        }
        if(b==-1)
        {
            cout<<"YES"<<"\n";
            return ;
        }
        tm--;
    }
    cout<<"NO"<<"\n";
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


