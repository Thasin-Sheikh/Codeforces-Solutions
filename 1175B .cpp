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
string str[N];
ll val[N];
void solve()
{
    ll i,j,k,m,n,l,r,q,p,ans,sum=0;
    bool yes=true;
    vector<ll>v;
    cin>>n;
    ll x=1;
    j=0;
    ll f=0;
    ll add=-1;
    for(i=1; i<=n; i++)
    {
        cin>>str[i];
        if(str[i]=="add")
        {
            add=i;
        }
        else if(str[i]=="for")
        {
            cin>>l;
            val[i]=l;
        }
    }
    if(add==-1)
    {
        cout<<0<<"\n";
        return ;
    }
    ll c=0;
    for(i=n;i>=1;i--)
    {
        if(str[i]=="end")
        {
            c++;
        }
        else if(str[i]=="add")
        {
            c=0;
        }
        else
        {
            if(c)
            {
                str[i]="0";
                c--;
            }
        }
    }
    c=0;
    for(i=1;i<=n;i++)
    {
        if(str[i]=="0")
        {
            c++;
        }
        else if(str[i]=="add")
        {
            c=0;
        }
        else
        {
            if(c)
            {
                str[i]="0";
                c--;
            }
        }
    }
    ll target=(1LL<<32)-1;
    for(i=1;i<=add;i++)
    {
        if(str[i]=="add")
        {
            sum+=x;
        }
        else if(str[i]=="for")
        {
            x*=val[i];
            v.push_back(val[i]);
        }
        else if(str[i]=="end")
        {
            x/=v.back();
            v.pop_back();
        }
        if(sum>target||x>target)
        {
            cout<<"OVERFLOW!!!"<<"\n";
            return ;
        }
    }
    if(sum>target)
    {
        cout<<"OVERFLOW!!!"<<"\n";
    }
    else cout<<sum<<"\n";
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


