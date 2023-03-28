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
        ll aarray[100000+10];
        cin>>n>>str;
        for(i=0; i<str.length(); i++)
        {
            aarray[i+1]=str[i]-'0'-1;
        }
        ll ans=0;
        map<ll,ll>mp;
        ll csum=0;
        mp[0]=1;
        for(i=1; i<=n; i++)
        {
            csum+=aarray[i];
            ans+=mp[csum];
            mp[csum]++;
        }
        cout<<ans<<endl;
    }

    return 0;
}


