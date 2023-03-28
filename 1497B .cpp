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
void solve()
{
    ll i,j,k,m,n,l,r,q,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n>>m;
    for(i=1; i<=n; i++)
    {
        cin>>l;
        mp[l%m]++;
    }
    ans=0;
    if(mp[0])
    {
        ans=1;
        mp[0]=0;
    }
    for(i=1; i<=m/2; i++)
    {
        if(i+i==m)
        {
            if(mp[i])
            {
                mp[i]=0;
                ans++;
            }
        }
        else
        {
            l=min(mp[i],mp[m-i]);
            r=max(mp[i],mp[m-i]);
            if(l==0)
            {
                continue;
            }
            if(r!=l)
            {
                if(mp[i]!=l)
                {
                    mp[i]-=(l+1);
                    mp[m-i]-=l;
                }
                else
                {
                    mp[m-i]-=(l+1);
                    mp[i]-=l;
                }
            }
            else
            {
                mp[i]-=l;
                mp[m-i]-=l;
            }
            if(l!=0)
            {
                ans++;
            }
        }
    }
    for(i=1;i<m;i++)
    {
        //cout<<i<<" "<<mp[i]<<endl;
        ans+=mp[i];
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
    cin>>t;
    while(t--)
    {
        mp.clear();
        solve();
    }

    return 0;
}


