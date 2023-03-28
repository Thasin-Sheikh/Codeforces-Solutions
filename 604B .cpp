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
ll aarray[N];
ll magic[505][505];
vector<ll>primes;
bool ok[1000001];
ll n;
vector<ll>v;
ll bs(ll num,ll k)
{
    ll i,j,c=0,sum=0,f;
    f=n-1;
    i=0;
    while(i<=f)
    {
        sum+=v[f];
        if(sum>num)
        {
            return false;
        }
        else
        {
            if(sum+v[i]<=num)
            {
                i++;
                f--;
                c++;
                //cout<<i<<" "<<f<<" "<<c<<endl;
                sum=0;
            }
            else
            {
                c++;
                //cout<<i<<" "<<f<<" "<<c<<endl;
                f--;
                sum=0;
            }
        }
    }
    //cout<<num<<" "<<c<<endl;
    if(c<=k)
        return true;
    else return false;
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,m,k,t;
    cin>>n>>k;
    m=INT_MIN;
    for(i=1;i<=n;i++)
    {
        cin>>aarray[i];
        v.push_back(aarray[i]);
        m=max(m,aarray[i]);
    }
    ll l,r;
    l=m,r=1e18;
    ll ans=INT_MAX;
    while(l<=r)
    {
        ll mid=(l+r)/2;
        if(bs(mid,k))
        {
            r=mid-1;
            ans=min(ans,mid);
        }
        else
            l=mid+1;
    }
    cout<<ans<<endl;
    return 0;
}



