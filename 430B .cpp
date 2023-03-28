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
ll aarray[N];
ll magic[R][R];
vector<ll>primes;
bool check[1000001];
ll vis[N];
map<ll,ll>mp;
void solve()
{
    ll i,j,k,m,n,l,r,q,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    ll x;
    cin>>n>>k>>x;
    for(i=1; i<=n; i++)
    {
        cin>>aarray[i];
    }
    ans=0;
    for(i=1; i<n; i++)
    {
        if(aarray[i]==x)
        {
            sum=0;
            if(aarray[i+1]==aarray[i])
            {
                sum+=2;
                ll p=i;
                q=i+1;
                while(p>1&&q<n)
                {
                    set<ll>sl;
                    ll c=0;
                    if(p-1>=1)
                    {
                        sl.insert(aarray[p-1]);
                        c++;
                    }
                    if(p-2>=1)
                    {
                        sl.insert(aarray[p-2]);
                        c++;

                    }
                    if(q+1<=n)
                    {
                        sl.insert(aarray[q+1]);
                        c++;
                    }
                    if(q+2<=n)
                    {
                        sl.insert(aarray[q+2]);
                        c++;
                    }
                    if(sl.size()==1&&c==4)
                    {
                        p-=2;
                        q+=2;
                        sum+=4;
                    }
                    else if(p-1>=1&&p-2>=1&&q+1<=n&&aarray[p-2]==aarray[p-1]&&aarray[p-1]==aarray[q+1])
                    {
                        p-=2;
                        q+=1;
                        sum+=3;
                    }
                    else if(p-1>=1&&q+1<=n&&q+2<=n&&aarray[p-1]==aarray[q+1]&&aarray[q+1]==aarray[q+2])
                    {
                        p-=1;
                        q+=2;
                        sum+=3;
                    }
                    else break;
                }
                //cout<<sum<<" "<<i<<endl;
                ans=max(ans,sum);
            }
        }
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
    t=1;
    while(t--)
    {
        solve();
    }
    return 0;
}


