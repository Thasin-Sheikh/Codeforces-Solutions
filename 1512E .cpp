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
    ll s;
    cin>>n>>l>>r>>s;
    ll e=r-l+1;
    ll cnt[n+1];
    for(i=1;i<=n;i++)
    {
        cnt[i]=0;
    }
    ll minsum=(e*(e+1))/2;
    ll ex=n-e;
    ll maxsum=(n*(n+1))/2-(ex*(ex+1))/2;
    if(s<minsum||s>maxsum)
    {
        cout<<-1<<"\n";
        return ;
    }
    for(i=1;i<=e;i++)
    {
        v.push_back(i);
    }
    ll dif=s-minsum;
    for(i=0;i<v.size();i++)
    {
        if(dif==0)
        {
            break;
        }
        ll a,b;
        a=n-v[i];
        b=dif;
        ll c=min(a,b);
        v[i]+=c;
        if(i<v.size()&&v[i+1]==v[i])
        {
            v[i]--;
            v[i+1]++;
        }
        dif-=c;
        if(dif==0)
        {
            break;
        }
    }
    for(i=1;i<=n;i++)
    {
        cnt[i]=0;
    }
    for(i=0;i<v.size();i++)
    {
        cnt[v[i]]++;
    }
    vector<ll>a;
    for(i=1;i<=n;i++)
    {
        if(cnt[i]==0)
        {
            a.push_back(i);
        }
    }
    for(i=1;i<=n;i++)
    {
        if(i>=l&&i<=r)
        {
            cout<<v.back()<<" ";
            v.pop_back();
        }
        else
        {
            cout<<a.back()<<" ";
            a.pop_back();
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
 

}

