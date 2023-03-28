///*Bismillahir Rahmanir Rahim***///
/***Stay_Home_Stay_Safe***/
///**Author Thasin Sheikh**///
#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template<class T> using myset=tree<T,null_type,less_equal<T>,rb_tree_tag,tree_order_statistics_node_update>;
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
dl aarray[N];
ll magic[R][R];
vector<ll>primes;
bool check[1000001];
ll large[10000005];
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};
ll vis[N];
map<ll,ll>mp;
void solve()
{
    ll i,j,k,m,n,l,r,q,p,ans,sum=0,a,b,c,d;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>aarray[i];
    }
    ans=0;
    if(n==1||n==2)
    {
        cout<<0<<"\n";
        return ;
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(i==j)
            {
                continue;
            }
            else
            {
                ll mis=2;
                dl kk=((aarray[j]-aarray[i])/(j-i));
                dl pa=aarray[i]-(i*kk);
                //cout<<i<<" "<<j<<" "<<kk<<" "<<pa<<endl;
                //cout<<i<<" "<<j<<" "<<pa<<endl;
                for(k=0; k<n; k++)
                {
                    if(k==i||k==j)
                        continue;
                    else if(aarray[k]==(pa+(kk*k)))
                    {
                        mis++;
                    }
                }
                ans=max(ans,mis);
            }
        }
    }
    cout<<n-ans<<"\n";
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

