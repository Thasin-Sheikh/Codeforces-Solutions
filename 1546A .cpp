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
ll a[N],b[N];
void solve()
{
    ll i,j,k,m,n,l,r,q,p,sum=0;
    string str;
    bool yes=true;
    vector<pair<ll,ll>>choto,boro,ans;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    ll ex=0;
    for(i=1; i<=n; i++)
    {
        cin>>b[i];
        if(b[i]<a[i])
        {
            k=a[i]-b[i];
            boro.push_back({i,k});
            sum+=k;

        }
        if(b[i]>a[i])
        {
            k=b[i]-a[i];
            choto.push_back({i,k});
            ex+=k;
        }
    }
    if(ex!=sum)
    {
        cout<<-1<<"\n";
        return ;
    }
    if(ex==0)
    {
        cout<<0<<"\n";
        return ;
    }
    for(i=0; i<boro.size();)
    {
        k=boro[i].second;
        l=boro[i].first;
        r=choto.back().second;
        p=choto.back().first;
        m=min(k,r);
        ll cur=m;
        while(m)
        {


            ans.push_back({l,p});
            m--;
        }
        if(cur==r&&cur==k)
        {
            i++;
            choto.pop_back();

        }
        else if(k<=cur)
        {
            i++;
            choto.back().second-=cur;

        }
        else
        {
            boro[i].second-=cur;
            choto.pop_back();
        }
    }
    cout<<ans.size()<<"\n";
    for(auto it:ans)
    {
        cout<<it.first<<" "<<it.second<<"\n";
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

