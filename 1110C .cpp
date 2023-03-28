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
    ll i,j,n,m,k,a,b,t,c,d;
    vector<ll>v;
    for(i=0;i<=30;i++)
    {
        a=ll(pow(2,i));
        a--;
        mp[a]++;
        v.push_back(a);
    }
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(mp[n])
        {
            ll ans=n;
            a=0;
            for(j=2;j*j<=n;j++)
            {
                if(n%j==0)
                {
                    a=max(a,j);
                    if(n/j!=j)
                    {
                        a=max(a,n/j);
                    }
                }
            }
            if(a==0)
            {
                cout<<1<<"\n";
            }
            else cout<<a<<"\n";
        }
        else
        {
            a=lower_bound(v.begin(),v.end(),n)-v.begin();
            cout<<v[a]<<"\n";
        }
    }
    return 0;
}

