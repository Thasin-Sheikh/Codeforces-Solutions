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
map<ll,ll>mp;
void solve()
{
    ll i,j,k,m,n,l,r,q,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v,va;
    cin>>n;
    for(i=0;i<=30;i++)
    {
        k=(1<<i);
        k--;
        mp[k]++;
    }
    if(mp[n])
    {
        cout<<0<<"\n";
        return ;
    }
    while(1)
    {
        while(n)
        {
            if(n%2)
            {
                v.push_back(1);
            }
            else v.push_back(0);
            n/=2;
        }
        reverse(v.begin(),v.end());
        ll pro=1;
        ans=0;
        for(i=v.size()-1; i>=0; i--)
        {
            if(v[i]==0)
            {
                ans+=pro;
            }
            pro*=2;
        }
        ll sz=v.size();
        n=ans;
        va.push_back(sz);
        sum++;
        if(mp[n])
        {
            break;
        }
        n++;
        sum++;
        if(mp[n])
        {
            break;
        }
        v.clear();
    }
    //cout<<n<<endl;
    cout<<sum<<"\n";
    for(auto c:va)
    {
        cout<<c<<" ";
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
    t=1;
    while(t--)
    {
        solve();
    }
    return 0;
}
