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
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,k,t,z1,z2,o1,o2,t1,t2;
    cin>>t;
    while(t--)
    {
        ll ans;
        cin>>z1>>o1>>t1;
        cin>>z2>>o2>>t2;
        k=min(t1,o2);
        ans=2*k;
        t1-=k;
        o2-=k;
        ll k1=min(t1,t2);
        t1-=k1;
        t2-=k1;
        ll k2=min(t2,z1);
        t2-=k2;
        //cout<<k2<<endl;
        ans-=t2*2;
        cout<<ans<<endl;
    }

    return 0;
}


