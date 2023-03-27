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
    ll i,j,n,m,k,t,free,c,ans=0;
    cin>>n>>free;
    for(i=1;i<=n;i++)
    {
        cin>>aarray[i];
    }
    vector<ll>v;
    c=0;
    for(i=1;i<=n;i++)
    {
        c+=aarray[i];
        v.push_back(c);
    }
    k=0;
    aarray[0]=0;
    for(i=1;i<=n;i++)
    {
        k+=aarray[i-1];
        m=k+free;
        ll in=upper_bound(v.begin(),v.end(),m)-v.begin();
        t=in-i+1;
        ans=max(ans,t);
    }
    cout<<ans<<endl;

    return 0;
}


