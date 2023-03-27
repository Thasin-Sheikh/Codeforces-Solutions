///*Bismillahir Rahmanir Rahim***///
/***Stay_Home_Stay_Safe***/
///**Author Thasin Sheikh**///
#include<bits/stdc++.h>
using namespace std;
#define MAX 1e6+10
#define MOD 1000000007
#define PI acos(-1)
#define R 510
#define makefast__  ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using ll=long long int  ;
using dl =double;
using ull=unsigned long long;
const long N = 3e5 + 10;
ll aarray[N];
ll magic[R][R];
vector<ll>primes;
bool check[1000001];
ll vis[N];
map<ll,ll>mp,pp;
map<pair<ll,ll>,ll>cost;
vector<ll>v[1000],v1[1000];
ll res=INT_MAX;
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //tle khaite chas to endl use kor
    makefast__
    string str;
    ll i,j,n,m,k,t,a[1000],b[1000],c[1000],ans;
    cin>>n;
    ll sum=0,ex=0;
    for(i=1; i<=n; i++)
    {
        cin>>a[i]>>b[i]>>c[i];
        sum+=c[i];
    }
    k=b[1];
    vis[a[1]]=1;
    //cout<<k<<endl;
    mp[1]++;
    while(1)
    {
        for(i=1; i<=n; i++)
        {
            if(b[i]==k&&mp[i]==0)
            {
                k=a[i];
                ex+=c[i];
                mp[i]++;
                break;
            }
            else if(a[i]==k&&mp[i]==0)
            {
                k=b[i];
                mp[i]++;
                break;
            }
            //cout<<k<<endl;
        }
        if(vis[k]==1)
        {
            break;
        }
    }
   // cout<<ex<<endl;
    ans=min(ex,sum-ex);
    cout<<ans<<"\n";
    return 0;
}




