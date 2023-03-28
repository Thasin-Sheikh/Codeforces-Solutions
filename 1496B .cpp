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
    for(i=0;i<n;i++)
    {
        cin>>k;
        v.push_back(k);
        mp[k]++;
    }
    if(m==0)
    {
        cout<<n<<"\n";
        return ;
    }
    sort(v.begin(),v.end());
    l=INT_MAX;
    for(i=0;i<v.size();i++)
    {
        if(i!=v[i])
        {
            l=i;
            break;
        }
    }
    if(l==INT_MAX)
    {
        cout<<n+m<<"\n";
        return ;
    }
    r=(v.back()+l);
    q=r/2;
    if(r%2)
    {
        q++;
    }
    if(mp[q]==0)
    {
        n++;
    }
    cout<<n<<"\n";
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


