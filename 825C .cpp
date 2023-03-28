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
    cin>>n>>k;
    ans=0;
    k*=2;
    for(i=1; i<=n; i++)
    {
        cin>>l;
        v.push_back(l);
    }
    sort(v.begin(),v.end());
    ll c=0;
    m=0;
    for(i=0;i<v.size();i++)
    {
        if(v[i]<=k)
        {
            m=max(m,v[i]);
            c++;
        }
        else
        {
            if(c==0)
            {
                //cout<<k<<" "<<v[i]<<endl;
                while(k<v[i])
                {
                    ans++;
                    k*=2;
                }
                m=max(m,v[i]);
                c++;
            }
            else
            {
                l=m*2;
                k=max(k,l);
                while(k<v[i])
                {
                    ans++;
                    k*=2;
                }
                c=0;
                m=max(m,v[i]);
                c++;
            }
        }
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


