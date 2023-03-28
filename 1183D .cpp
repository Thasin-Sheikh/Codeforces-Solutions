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
ll vis[1000000];
map<ll,ll>mp;
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
        //memset(vis,0,sizeof(vis));
        cin>>n;
        ll a;
        vector<ll>v;
        for(i=1; i<=n; i++)
        {
            cin>>aarray[i];
            mp[aarray[i]]++;
        }
        for(i=1;i<=n;i++)
        {
            if(mp[aarray[i]]>0)
            {
               // cout<<aarray[i]<<" "<<mp[aarray[i]]<<endl;
                v.push_back(mp[aarray[i]]);
                mp[aarray[i]]=0;
            }
        }
        ll ans=0;
        sort(v.rbegin(),v.rend());
        for(i=1;i<v.size();i++)
        {
            if(v[i]>=v[i-1])
            {
                v[i]=v[i-1]-1;
            }
            else if(v[i-1]==0)
            {
                v[i]=0;
            }
        }
        for(i=0;i<v.size();i++)
        {
            if(v[i]>0)
                ans+=v[i];
        }
        cout<<ans<<endl;
        mp.clear();
    }

    return 0;
}



