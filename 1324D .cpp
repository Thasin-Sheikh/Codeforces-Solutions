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
ll acopy[200000+10];
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
    vector<ll>v;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>aarray[i];
    }
    for(i=1;i<=n;i++)
    {
        cin>>acopy[i];
    }
    for(i=1;i<=n;i++)
    {
        v.push_back(aarray[i]-acopy[i]);
    }
    sort(v.begin(),v.end());
    ll ans=0;
    for(i=0;i<v.size();i++)
    {
        if(v[i]<=0)
            continue;
        k=lower_bound(v.begin(),v.end(),-v[i]+1)-v.begin();
        ans+=i-k;
    }
    cout<<ans<<endl;

    return 0;
}


