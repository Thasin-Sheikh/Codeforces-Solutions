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
map<pair<ll,ll>,ll>mp,pp;
ll a[N],b[N];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //tle khaite chas to endl use kor
    makefast__
    string str;
    ll i,j,n,m=0,k,t;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    ll z=0;
    for(i=1; i<=n; i++)
    {
        cin>>b[i];
        if(a[i]!=0&&b[i]!=0)
        {
            k=__gcd(abs(a[i]),abs(b[i]));
            a[i]/=k;
            b[i]/=k;
            if(a[i]<0)
            {
                a[i]*=-1;
                b[i]*=-1;
            }
            mp[{-b[i],a[i]}]++;
            m=max(m,mp[{-b[i],a[i]}]);
        }
        if(a[i]!=0&&b[i]==0)
        {
            mp[{1,0}]++;
            m=max(m,mp[{1,0}]);

        }
        if(a[i]==0&&b[i]==0)
        {
            z++;
        }
    }
    cout<<m+z<<"\n";
    return 0;
}

