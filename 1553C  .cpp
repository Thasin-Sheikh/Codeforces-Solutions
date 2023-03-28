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
void solve()
{
    ll i,j,k,m,n,l,r,q,p,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    ll dp1[2][15],dp2[2][15];
    cin>>str;
    for(i=0; i<12; i++)
    {
        dp1[0][i]=dp1[1][i]=dp2[0][i]=dp2[1][i]=0;
    }
    for(i=1; i<=10; i++)
    {
        if(i%2)
        {
            if(str[i-1]=='1')
            {
                dp1[0][i]=dp1[0][i-1]+1;
                dp1[1][i]=dp1[0][i];
            }
            else if(str[i-1]=='0')
            {
                dp1[0][i]=dp1[0][i-1];
                dp1[1][i]=dp1[0][i];
            }
            else
            {
                dp1[0][i]=dp1[0][i-1]+1;
                dp1[1][i]=dp1[1][i-1];
            }
            dp2[0][i]=dp2[0][i-1];
            dp2[1][i]=dp2[1][i-1];
        }
        else
        {
            if(str[i-1]=='1')
            {
                dp2[0][i]=dp2[0][i-1]+1;
                dp2[1][i]=dp2[0][i];
            }
            else if(str[i-1]=='0')
            {
                dp2[0][i]=dp2[0][i-1];
                dp2[1][i]=dp2[0][i];
            }
            else
            {
                dp2[0][i]=dp2[0][i-1]+1;
                dp2[1][i]=dp2[1][i-1];
            }
            dp1[0][i]=dp1[0][i-1];
            dp1[1][i]=dp1[1][i-1];
        }
       // cout<<i<<endl;
        //cout<<dp1[0][i]<<" "<<dp1[1][i]<<endl;
        //cout<<dp2[0][i]<<" "<<dp2[1][i]<<endl;
        if(i%2)
        {
            ll ex=10-i;
            k=ex/2;
            p=k;
            if(ex%2)
            {
                k++;
            }
            l=dp2[1][i]+k;
            if(dp1[0][i]+p>l)
            {
                //cout<<dp1[0][i]<<" "<<dp1[1][i]<<endl;
                //cout<<dp2[0][i]<<" "<<dp2[1][i]<<endl;
                //cout<<1<<endl;
                cout<<i<<"\n";
                return ;
            }
        }
        else
        {
            ll ex=10-i;
            k=ex/2;
            r=dp1[1][i]+k;
            if(dp2[0][i]+k>r)
            {
                cout<<i<<"\n";
                return ;
            }
        }
    }
    cout<<10<<"\n";
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

