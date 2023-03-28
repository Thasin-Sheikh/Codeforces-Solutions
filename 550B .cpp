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
bool ok[1000001];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,k,t,l,r,x,ans=0;
    cin>>n>>l>>r>>x;
    for(i=0; i<n; i++)
    {
        cin>>aarray[i];
    }
    sort(aarray,aarray+n);
    for(i=0;i<(1LL<<n);i++)
    {
        ll c=0,ma=INT_MIN,mi=INT_MAX,sum=0;
        for(j=0;j<n;j++)
        {
            if(i&(1LL<<j))
            {
                c++;
                ma=max(ma,aarray[j]);
                mi=min(mi,aarray[j]);
                sum+=aarray[j];
            }
        }
        if(c>=2&&ma-mi>=x&&sum>=l&&sum<=r)
        {
            ans++;
        }
    }
    cout<<ans<<endl;

    return 0;
}


