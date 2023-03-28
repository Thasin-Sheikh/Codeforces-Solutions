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
map<pair<ll,ll>,vector<ll>>mp;
ll a[N],b[N],c[N];
ll cnt[N],flag[N];
void solve()
{
    ll i,j,k,m,n,l,r,q,p,sum=0;
    string str;
    bool yes=true;
    vector<ll>v,ans;
    cin>>n;
    for(i=1; i<=n-2; i++)
    {
        cin>>a[i]>>b[i]>>c[i];
        mp[ {a[i],b[i]}].push_back(c[i]);
        mp[ {a[i],c[i]}].push_back(b[i]);
        mp[ {b[i],c[i]}].push_back(a[i]);
        mp[ {b[i],a[i]}].push_back(c[i]);
        mp[ {c[i],a[i]}].push_back(b[i]);
        mp[ {c[i],b[i]}].push_back(a[i]);

        cnt[a[i]]++;
        cnt[b[i]]++;
        cnt[c[i]]++;
    }
    for(i=1; i<=n; i++)
    {
        if(cnt[i]==1)
        {
            v.push_back(i);
        }
    }
    k=v[0];
    for(i=1; i<=n-2; i++)
    {
        if(a[i]==k||b[i]==k||c[i]==k)
        {
            ans.push_back(k);
            flag[k]++;
            if(cnt[a[i]]==2)
            {
                flag[a[i]]++;
                ans.push_back(a[i]);
            }
            else if(cnt[b[i]]==2)
            {
                flag[b[i]]++;
                ans.push_back(b[i]);
            }
            else if(cnt[c[i]]==2)
            {
                flag[c[i]]++;
                ans.push_back(c[i]);
            }
            if(cnt[a[i]]==3)
            {
                flag[a[i]]++;
                ans.push_back(a[i]);
            }
            else if(cnt[b[i]]==3)
            {
                flag[b[i]]++;
                ans.push_back(b[i]);
            }
            else if(cnt[c[i]]==3)
            {
                flag[c[i]]++;
                ans.push_back(c[i]);
            }
            break;
        }
    }
    while(ans.size()<n)
    {
        ll len=ans.size();
        l=ans.back();
        r=ans[len-2];
        while(1)
        {
            k=mp[ {r,l}].back();

            if(flag[k])
            {
                mp[ {r,l}].pop_back();
            }
            else
            {
                ans.push_back(k);
                flag[k]++;
                break;
            }
        }
    }
    for(i=0; i<ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<"\n";
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

