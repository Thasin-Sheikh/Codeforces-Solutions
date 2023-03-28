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
ll a1[100000+10];
ll magic[101][101];
vector<ll>primes;
bool prime[1000001];
map<ll,ll>mp;
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,k,t,a;
    cin>>n;
    vector<ll>v;
    for(i=1;i<=n;i++)
    {
        cin>>aarray[i];
    }
    for(i=1;i<=n;i++)
    {
        cin>>a1[i];
        mp[a1[i]]=i;
    }
    for(i=1;i<=n;i++)
    {
        k=mp[aarray[i]];
        v.push_back(k);
    }
    ll flag=0,ans=0;
    for(i=0;i<v.size();i++)
    {
        if(v[i]<flag)
            ans++;
        flag=max(flag,v[i]);
    }
    cout<<ans<<endl;

    return 0;
}


