///*Bismillahir Rahmanir Rahim***///
/***Stay_Home_Stay_Safe***/
///**Author Thasin Sheikh**///
#include<bits/stdc++.h>
using namespace std;
#define MAX 1e6+10
#define MOD 1000000007
#define PI 3.14159265359
#define makefast__  ios_base::sync_with_stdio(false);
using ll=long long int  ;
using dl =double;
using ull=unsigned long long;
const int N = 2e5 + 10;
ll aarray[N];
ll magic[505][505];
vector<ll>primes;
bool ok[1000001];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,d,m,b,k,t;
    cin>>n>>d;
    vector<ll>v;
    ll ans=0;
    for(i=1;i<=n;i++)
    {
        cin>>k;
        ans+=k/10;
        v.push_back(k%10);
    }
    sort(v.rbegin(),v.rend());
    while(d)
    {
        ll f=0;
        for(i=0;i<v.size();i++)
        {
            t=10-v[i]%10;
            if(d>=t&&v[i]+t<=100)
            {
                f=1;
                v[i]=v[i]+t;
                ans+=v[i]/10;
                v[i]=v[i]%10;
                d-=t;
            }
        }
        sort(v.rbegin(),v.rend());
        if(!f)
            break;
    }
    for(i=0;i<v.size();i++)
    {
        ans+=(v[i]/10);
    }
    ll bal=n*10;
    ans=min(ans,bal);
    cout<<ans<<endl;

    return 0;
}
