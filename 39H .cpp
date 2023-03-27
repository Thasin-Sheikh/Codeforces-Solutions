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
    cin>>n;
    for(i=1; i<n; i++)
    {
        for(j=1; j<n; j++)
        {
            k=i*j;
            if(n==10)
            {
                cout<<k<<" ";
                continue;
            }
            ll p=k/n;
            vector<ll>v;
            while(p)
            {
                l=k%n;
                v.push_back(l);
                k=p;
                p=k/n;
            }
            v.push_back(k%n);
            for(r=v.size()-1;r>=0;r--)
            {
                cout<<v[r];
            }
            cout<<" ";
        }
        cout<<'\n';
    }
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


