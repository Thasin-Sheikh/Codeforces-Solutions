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
ll a[N],b[N];
void solve()
{
    ll i,j,k,m,n,l,r,q,p,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>k>>n>>m;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(i=1;i<=m;i++)
    {
        cin>>b[i];
    }
    i=1,j=1;
    while(i<=n||j<=m)
    {
       // cout<<i<<" "<<j<<endl;
        if(i<=n&&j<=m)
        {
            if(a[i]==0)
            {
                v.push_back(0);
                i++;
                k++;
            }
            else if(b[j]==0)
            {
                v.push_back(0);
                j++;
                k++;
            }
            else if(a[i]<=b[j]&&a[i]<=k)
            {
                v.push_back(a[i]);
                i++;
            }
            else if(b[j]<a[i]&&b[j]<=k)
            {
                v.push_back(b[j]);
                j++;
            }
            else
            {
                cout<<-1<<"\n";
                return ;
            }
        }
        else if(i<=n)
        {
            if(a[i]==0)
            {
                v.push_back(0);
                i++;
                k++;
            }
            else if(a[i]<=k)
            {
                v.push_back(a[i]);
                i++;
            }
            else
            {
                cout<<-1<<"\n";
                return ;
            }
        }
        else if(j<=m)
        {
            if(b[j]==0)
            {
                v.push_back(0);
                j++;
                k++;
            }
            else if(b[j]<=k)
            {
                v.push_back(b[j]);
                j++;
            }
            else
            {
                cout<<-1<<"\n";
                return ;
            }
        }
    }
    for(i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<"\n";
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
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}

