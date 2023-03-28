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
using ll=long long int  ;
using dl =double;
using ull=unsigned long long;
const long N = 3e5 + 10;
ll aarray[N];
ll magic[R][R];
vector<ll>primes;
bool check[1000001];
ll vis[N];
map<ll,ll>mp;
ll ans[N];
void solve()
{
    ll i,j,n,m,k,l,sum;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>aarray[i];
        mp[aarray[i]]++;
        ans[i]=0;
    }
    if(mp[1])
    {
        ans[n]=1;
    }
    bool yes=true;
    for(i=1;i<=n;i++)
    {
        if(mp[i]!=1)
        {
            yes=false;
            break;
        }
    }
    if(yes)
    {
        ans[1]=1;
    }
    l=1;
    ll r=n;
    for(i=n;i>=2;i--)
    {
        if(mp[n-i+1])
        {
            ans[i]=1;
        }
        if(mp[n-i+1]!=1)
        {
            for(j=1;j<=n;j++)
            {
                cout<<ans[j];
            }
            cout<<"\n";
            return ;
        }
        if(aarray[l]==n-i+1)
        {
            l++;
        }
        else if(aarray[r]==n-i+1)
        {
            r--;
        }
        else
        {
            for(j=1;j<=n;j++)
            {
                cout<<ans[j];
            }
            cout<<"\n";
            return ;
        }
        ans[i]=1;
    }
    for(i=1;i<=n;i++)
    {
        cout<<ans[i];
    }
    cout<<"\n";
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //tle khaite chas to endl use kor
    makefast__
    string str;
    ll i,j,n,m,k,t;
    cin>>t;
    while(t--)
    {
        mp.clear();
        solve();
    }

    return 0;
}

