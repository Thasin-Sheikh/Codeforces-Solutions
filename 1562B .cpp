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
void solve()
{
    ll i,j,k,m,n,l,r,q,p,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n;
    cin>>str;
    ll cnt[15];
    set<ll>pri;
    for(i=1;i<=10;i++)
    {
        cnt[i]=0;
    }
    for(i=0;i<n;i++)
    {
        k=str[i]-'0';
        if(k%2==0&&k!=2)
        {
            v.push_back(k);
        }
        else if(k!=2&&k!=3&&k!=5&&k!=7)
        {
            v.push_back(k);
        }
    }
    if(v.size())
    {
        cout<<1<<"\n";
        cout<<v[0]<<"\n";
        return ;
    }
    for(i=1;i<=9;i++)
    {
        if(cnt[i]>=2)
        {
            cout<<2<<"\n";
            cout<<i<<i<<"\n";
            return ;
        }
    }
    if(n==2)
    {
        cout<<2<<"\n";
        cout<<str<<"\n";
        return ;
    }
    vector<ll>pp,ap;
    for(i=1;i<n;i++)
    {
        if(str[i]=='2'||str[i]=='5')
        {
            cout<<2<<"\n";
            cout<<str[0]<<str[i]<<"\n";
            return ;
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            ll cur=str[i]-'0';
            cur*=10;
            cur+=(str[j]-'0');
            for(k=2;k*k<=cur;k++)
            {
                if(cur%k==0)
                {
                    cout<<2<<"\n";
                    cout<<str[i]<<str[j]<<"\n";
                    return ;
                }

            }

        }
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
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}

