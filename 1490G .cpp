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
    vector<ll>v,ind,pre;
    cin>>n>>q;
    ll ma=INT_MIN;
    ll c=0;
    for(i=1; i<=n; i++)
    {
        cin>>aarray[i];
        sum+=aarray[i];
        if(pre.empty()||sum>pre.back())
        {
            pre.push_back(sum);
            ind.push_back(c);
        }
        c++;

    }
    ll x;
    while(q--)
    {
        cin>>x;
        if(sum<=0&&pre.back()<x)
        {
            cout<<-1<<" ";
        }
        else
        {
            ll nt=0;
            if(pre.back()<x)
            nt=(x-pre.back()+sum-1)/sum;
            x-=nt*sum;
            ans=nt*n;
            l=lower_bound(pre.begin(),pre.end(),x)-pre.begin();
            ans+=ind[l];
            cout<<ans<<" ";
        }
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
        solve();
    }
    return 0;
}


