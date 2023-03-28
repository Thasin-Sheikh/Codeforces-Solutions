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
using ull=unsigned long long;
const long N = 3e5 + 10;
ll aarray[N];
ll magic[R][R];
vector<ll>primes;
bool check[1000001];
ll vis[N];
map<ll,ll>mp,pp;
ll pre[N],suf[N];
void solve()
{
    ll i,j,k,m,n,l,r,q,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>aarray[i];
        pre[i]=pre[i-1]+aarray[i];
        mp[aarray[i]]=i;
    }
    for(i=n; i>=1; i--)
    {
        suf[i]=suf[i+1]+aarray[i];
        pp[aarray[i]]=i;
    }
    for(i=1;i<=n;i++)
    {
        if(pre[i]==suf[i+1])
        {
            cout<<"YES"<<"\n";
            return ;
        }
        else if(pre[i]>suf[i+1])
        {
            l=pre[i]-suf[i+1];
            k=l/2;
            if(l%2)
            {
                continue;
            }
            if(pp[k]&&pp[k]<i)
            {
                cout<<"YES"<<"\n";
                return ;
            }
        }
        else
        {
            l=suf[i+1]-pre[i];
            k=l/2;
            if(l%2)
            {
                continue;
            }
            if(mp[k]&&mp[k]>i)
            {
                cout<<"YES"<<"\n";
                return ;
            }
        }
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
