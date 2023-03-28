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
map<ll,ll>mp1,mp2;
ll n;
ll bs(ll num)
{
    mp2=mp1;
    ll i,j,l,k;
    for(i=1; i<num; i++)
    {
        mp2[aarray[i]]--;
    }
    ll f;
    for(i=num; i<=n; i++)
    {
        f=1;
        mp2[aarray[i]]--;
        for(j=1; j<=n; j++)
        {
            if(mp2[aarray[j]]>1)
            {
                f=0;
                break;
            }
        }
        if(f)
            return true;
        mp2[aarray[i-num+1]]++;

    }
    return false;
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,m,k,t;
    set<ll>sl;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>aarray[i];
        mp1[aarray[i]]++;
        sl.insert(aarray[i]);
    }
    if(sl.size()==n)
    {
        cout<<0<<endl;
        return 0;
    }
    ll l,r;
    l=1,r=n-1;
    ll ans=INT_MAX;
    while(r>=l)
    {
        ll mid=(r+l)/2;
        if(bs(mid))
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


