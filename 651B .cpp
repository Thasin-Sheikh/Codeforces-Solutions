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
    ll i,j,n,m,k,t,a;
    cin>>n;
    map<ll,ll>mp;
    for(i=1; i<=n; i++)
    {
        cin>>a;
        ms.insert(a);
    }
    ll ans=0;
    while(!ms.empty())
    {
        s.clear();
        for(auto it=ms.begin();it!=ms.end();it++)
        {
            if(s.find(*it)==s.end())
            {
                s.insert(*it);
            }
        }
        ans+=s.size()-1;
        for(auto it=s.begin();it!=s.end();it++)
        {
            if(ms.find(*it)!=ms.end())
            {
                ms.erase(ms.find(*it));
            }
        }

    }
    cout<<ans<<endl;
}
