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
using ll=long long int ;
using dl =double;
using ld=long double;
using ull=unsigned long long;
const long N = 3e5 + 10;
const long maxn=5e5+10;
ll aarray[N];
ll magic[R][R];
vector<ll>primes;
bool check[1000001];
ll large[10000005];
ll vis[N];
map<ll,ll>mp;
ll ind=0;
void solve()
{
    ll i,j,k,m,n,l,r,q,p,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n>>str;
    str+='2';
    ll cur=1;
    if(n==1)
    {
        cout<<1<<"\n";
        return ;
    }
    for(i=1; i<=n; i++)
    {
        if(str[i]==str[i-1])
        {
            cur++;
        }
        else
        {
            v.push_back(cur);
            cur=1;
        }
    }
    ans=0;
    for(i=0; i<v.size();)
    {
        if(v[i]>1)
        {
            ans++;
            i++;
            v[i]=0;
        }
        else
        {
            l=upper_bound(v.begin(),v.end(),1)-v.begin();
            if(l==v.size()||v[l]<2)
            {
                v[i]=-1;
                if(i+1<v.size())
                {
                    v[i+1]=-1;
                }
                ans++;
                i+=2;
            }
            else
            {
                v[l]--;
                ans++;
                i++;
            }
        }
        //cout<<i<<" "<<ans<<endl;
    }
    cout<<ans<<"\n";
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //tle khaite chas to endl use kor
    makefast__
    string str;
    ll i,j,n,m,k,t;
    cin>>t;
    while(t--)
    {
        ind=0;
        solve();
    }

    return 0;
}


