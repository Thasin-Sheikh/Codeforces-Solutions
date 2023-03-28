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
map<ll,ll>mp;
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //tle khaite chas to endl use kor
    makefast__
    string str;
    ll i,j,n,m,k,t;
    ll ans=INT_MAX;
    cin>>n;
    vector<ll>v,v1;
    for(i=1;i<=n;i++)
    {
        cin>>aarray[i];
        v.push_back(aarray[i]);
    }
    v1=v;
    for(i=-1;i<=1;i++)
    {
        for(j=-1;j<=1;j++)
        {
            ll change=abs(i)+abs(j);
            ll a1,a2;
            v[0]+=i;
            v[1]+=j;
            ll dif=v[1]-v[0];
            ll f=1;
            for(k=2;k<n;k++)
            {
                ll d=v[k]-v[k-1];
                //cout<<d<<endl;
                if(d==dif)
                {
                    continue;
                }
                else if((v[k]+1)-v[k-1]==dif)
                {
                    change++;
                    v[k]+=1;
                }
                else if((v[k]-1)-v[k-1]==dif)
                {
                    change++;
                    v[k]-=1;
                }
                else
                {
                    f=0;
                    break;
                }
            }
            if(f)
            ans=min(ans,change);
            v=v1;
        }
    }
    if(ans==INT_MAX)
    {
    cout<<-1<<"\n";
    return 0;
    }
    cout<<ans<<"\n";
    return 0;
}
