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
ll lshift[105][10005],rshift[105][10005];
void solve()
{
    ll i,j,k,m,n,l,r,q,ans,sum=0;
    string str[200];
    bool yes=true;
    vector<ll>v;
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
        for(j=0;j<m;j++)
        {
            lshift[i][j]=rshift[i][j]=INT_MAX;
        }
    }
    for(i=1; i<=n; i++)
    {
        cin>>str[i];
        for(j=0;j<m;j++)
        {
            if(str[i][j]=='1')
            {
                rshift[i][j]=j;
            }
            else
            {
                if(j!=0)
                rshift[i][j]=rshift[i][j-1];
            }
        }
        for(j=m-1;j>=0;j--)
        {
            if(str[i][j]=='1')
            {
                lshift[i][j]=j;
            }
            else
            {
                if(j!=m-1)
                {
                    lshift[i][j]=lshift[i][j+1];
                }
            }
        }
    }
    ans=INT_MAX;
    for(j=0;j<m;j++)
    {
        sum=0;
        for(i=1;i<=n;i++)
        {
            if(str[i][j]=='0')
            {
                ll a,b,c;
                a=rshift[i][j];
                b=rshift[i][m-1];
                c=lshift[i][j];
                ll d=lshift[i][0];
                ll p=INT_MAX;
                if(a!=INT_MAX)
                {
                    p=min(p,j-a);
                }
                if(b!=INT_MAX&&b>j)
                {
                    p=min(p,m-b+j);
                }
                if(c!=INT_MAX&&c>j)
                {
                    p=min(p,c-j);
                }
                if(d!=INT_MAX&&d<j)
                {
                    p=min(p,d+(m-j));
                }
                //cout<<i<<" "<<j<<" "<<a<<" "<<b<<" "<<c<<endl;
                sum+=p;
            }
        }
        ans=min(ans,sum);
    }
    if(ans>=INT_MAX)
    {
        cout<<-1<<"\n";
        return ;
    }
    cout<<ans<<"\n";
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


