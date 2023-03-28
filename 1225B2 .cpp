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
ll pre[200000+10];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,k,t,d;
    cin>>t;
    while(t--)
    {
        cin>>n>>k>>d;
        ll ans=INT_MAX;
        map<ll,ll>mp;
        for(i=1;i<=n;i++)
        {
            cin>>aarray[i];
        }
        ll dis=0;
        for(i=1;i<=d;i++)
        {
            if(mp[aarray[i]])
            {
                mp[aarray[i]]++;
            }
            else
            {
                dis++;
                mp[aarray[i]]++;
            }

        }
        ans=min(ans,dis);
        for(i=1,j=d+1;j<=n;i++,j++)
        {
            mp[aarray[i]]--;
            if(mp[aarray[i]]==0)
                dis--;
            mp[aarray[j]]++;
            if(mp[aarray[j]]==1)
                dis++;
            ans=min(ans,dis);
        }
        cout<<ans<<endl;
    }

    return 0;
}


