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
    ll i,j,n,m,k,t;
    map<ll,ll>mp;
    mp[1]=1;
    for(i=2; i<=1e18+5; i*=2)
    {
        mp[i]=mp[i/2]*2+1;
    }
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll pos=0;
        ll ans=0;
        while(n>0)
        {
            if(n%2==1)
                ans+=mp[pow(2,pos)];
            pos++;
            n/=2;
        }
        cout<<ans<<endl;
    }

    return 0;
}


