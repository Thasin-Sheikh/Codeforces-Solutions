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
ll aarray[200000+10];
ll magic[101][101];
vector<ll>primes;
bool ok[1000001];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,k,t;
    ll fish,rabbit,chicken;
    cin>>fish>>rabbit>>chicken;
    k=min(fish/3,min(rabbit/2,chicken/2));
    ll ans=k*7;
    fish-=(3*k);
    rabbit-=(2*k);
    chicken-=(2*k);
    vector<ll>v,vv;
    v.push_back(fish);
    v.push_back(rabbit);
    v.push_back(chicken);
    //cout<<v[0]<<" "<<v[1]<<" "<<v[2]<<endl;
    vector<ll> bal({0,1,2,0,2,1,0});
    ll dhur=0;
    for(i=0;i<7;i++)
    {
        ll d=i;
        ll cur=0;
        vv=v;
        while(vv[bal[d]]>0)
        {
            vv[bal[d]]--;
            cur++;
            d=(d+1)%7;
        }
        dhur=max(dhur,cur);
        vv.clear();
    }
    cout<<ans+dhur<<endl;

    return 0;
}


