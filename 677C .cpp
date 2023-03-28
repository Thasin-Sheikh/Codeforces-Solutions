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
ll getans(ll p)
{
    ll base=3;
    ll power=p;
    ll pro=1;
    while(power)
    {
        if(power%2)
        {
            pro*=base;
            pro%=MOD;
            power--;
        }
        base*=base;
        base%=MOD;
        power/=2;
    }
    pro%=MOD;
    return pro;

}
char cnt[50];
void solve()
{
    ll i,j,k,m,n,l,r,q,p,ans,sum=0;
    string str;
    bool yes=true;
    vector<char>v;
    cin>>str;
    ll cur=0;
    for(char c='0';c<='9';c++)
    {
        cnt[c]=cur;
        cur++;

    }
    for(char c='A';c<='Z';c++)
    {
        cnt[c]=cur;
        cur++;
    }
    for(char c='a';c<='z';c++)
    {
        cnt[c]=cur;
        cur++;
    }
    cnt['-']=cur;
    cur++;
    cnt['_']=cur;
    ans=0;
    for(i=0;i<str.size();i++)
    {
        l=cnt[str[i]];
        //cout<<l<<endl;
        for(j=0;j<6;j++)
        {
            if(!(l&(1LL<<j)))
            {
                //cout<<j<<endl;
                sum++;
            }
        }
        //cout<<sum<<endl;
    }
    ans=getans(sum);
    cout<<ans<<"\n";
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

