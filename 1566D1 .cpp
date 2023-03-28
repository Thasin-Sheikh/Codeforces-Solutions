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
int dx[] = {-1 , 0 , 1 , 0};
int dy[] = {0 , 1 , 0 , -1};
ll vis[N];
map<ll,ll>mp;
void solve()
{
    ll i,j,k,m,n,l,r,q,p,sum=0;
    string str;
    ll ans[510];
    bool yes=true;
    vector<ll>v,vc;
    cin>>n>>m;
    for(i=1;i<=m+1;i++)
    {
        ans[i]=0;
    }
    for(i=1;i<=m;i++)
    {
        cin>>l;
        v.push_back(l);

    }
    vc=v;
    sort(vc.begin(),vc.end());
    ll pos=1;
    for(i=0;i<vc.size();i++)
    {
        aarray[pos]=vc[i];
        pos++;
    }
    for(i=0;i<v.size();i++)
    {
        for(j=m;j>=1;j--)
        {
            if(aarray[j]==v[i])
            {
                aarray[j]=1000000000000;
                ans[j]=1;
                //cout<<j<<endl;
                for(k=j-1;k>=1;k--)
                {
                    if(ans[k])
                    {
                        sum++;
                    }
                }
                break;
            }
        }
       // cout<<i<<" "<<sum<<endl;
    }
    cout<<sum<<"\n";
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //tle khaite chas to endl use kor
    //no test case in interactive ,check it idiot
    makefast__
    string str;
    ll i,j,n,m,k,t;
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}

