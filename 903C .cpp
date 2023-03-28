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
const int N = 2e5 + 10;
ll aarray[200000+10];
ll magic[101][101];
vector<ll>primes;
bool prime[1000001];
multiset<ll>ms;
set<ll>s;
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,k,t;
    cin>>n;
    set<ll>sl;
    for(i=1;i<=n;i++)
    {
        ll a;
        cin>>a;
        ms.insert(a);
    }
    ll ans=0;
    while(!ms.empty())
    {
        sl.clear();
        for(auto it=ms.begin();it!=ms.end();it++)
        {
            sl.insert(*it);
        }
        ans++;
        for(auto it=sl.begin();it!=sl.end();it++)
        {
            ms.erase(ms.find(*it));
        }
    }
    cout<<ans<<endl;

    return 0;
}


