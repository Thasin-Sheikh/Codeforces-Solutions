///*Bismillahir Rahmanir Rahim***///
/***Stay_Home_Stay_Safe***/
///**Author Thasin Sheikh**///
#include<bits/stdc++.h>
using namespace std;
#define MAX 1e6+10
#define MOD 1000000007
#define PI 3.14159265359
#define makefast__  ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using ll=long long int  ;
using dl =double;
using ull=unsigned long long;
const int N = 2e5 + 10;
ll aarray[N];
ll magic[505][505];
vector<ll>primes;
bool ok[1000001];
ll a[N];
map<ll,ll>mp,mp1;
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,k,t;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>aarray[i];
        mp1[aarray[i]]++;
    }
    set<ll>sl;
    for(i=n; i>=1; i--)
    {
        sl.insert(aarray[i]);
        a[i]=ll(sl.size());
    }
    ll ans=0;
    for(i=1; i<=n; i++)
    {
        if(mp[aarray[i]]!=0)
        {
            continue;
        }
        else
        {
            k=a[i];
            if(mp1[aarray[i]]>1)
            {
                k++;
            }
            ans+=(k-1);
            mp[aarray[i]]=-1;
        }
    }
    cout<<ans<<endl;
    return 0;
}



