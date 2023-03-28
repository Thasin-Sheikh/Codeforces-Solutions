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
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //tle khaite chas to endl use kor
    makefast__
    string str;
    ll i,j,n,m=0,k,t,a;
    cin>>n>>k;
    vector<ll>v;
    bool yes=false;
    for(i=1; i<=n; i++)
    {
        cin>>a;
        mp[a]++;
        v.push_back(a);
        if(mp[a]==k)
        {
            yes=true;
        }
        m=max(m,a);
    }
    if(yes)
    {
        cout<<0<<"\n";
        return 0;
    }
    ll ans=INT_MAX;
    for(i=0;i<=m;i++)
    {
        ll c,pc=0;
        vector<ll>hu;
        for(j=0;j<v.size();j++)
        {
            c=0;
            ll num=v[j];
            while(num>i)
            {
                num/=2;
                c++;
            }
            if(num==i)
            {
                hu.push_back(c);

            }
        }
        sort(hu.begin(),hu.end());
        if(hu.size()>=k)
        {
            ll sum=0;
            for(j=0;j<k;j++)
            {
                sum+=hu[j];
            }
            ans=min(ans,sum);

        }
    }
    cout<<ans<<"\n";
    return 0;
}


