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
ll cnt(ll x)
{
    ll c=0,i,j,n;
    while(x%3==0)
    {
        c++;
        x/=3;
    }
    return c;
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,k,t;
    cin>>n;
    vector<pair<ll,ll>>v;
    for(i=0; i<n; i++)
    {
        cin>>m;
        k=cnt(m);
        v.push_back(make_pair(-k,m));
    }
    sort(v.begin(),v.end());
    for(auto it=v.begin();it!=v.end();it++)
        cout<<it->second<<" ";
    cout<<endl;

    return 0;
}


