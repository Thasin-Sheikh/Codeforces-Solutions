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
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        map<ll,ll>mp;
        vector<ll>v;
        ll x=m;
        while(1)
        {
            k=x%10;
            if(mp[k]==1)
                break;
            mp[k]=1;
            v.push_back(k);
            x+=m;

        }
        ll div=n/m;
        ll a1=div/v.size();
        ll ans=0;
        for(i=0; i<v.size(); i++)
            ans+=v[i];
        //cout<<ans<<endl;
        ans*=a1;
        ll rem=div%v.size();
        for(i=0; i<rem; i++)
            ans+=v[i];
        cout<<ans<<endl;
    }

    return 0;
}


