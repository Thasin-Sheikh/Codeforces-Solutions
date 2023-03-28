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
const long MAXN=5e5+10;
int aarray[N];
int magic[R][R];
vector<ll>primes;
bool check[1000001];
int large[10000005];
ll vis[N];
map<ll,ll>mp;
ll cnt[N];
ll col[N];
void solve()
{
    ll i,j,k,m,n,l,r,q,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n;
    set<ll>s;
    for(i=1; i<=n; i++)
    {
        cin>>aarray[i];
        s.insert(aarray[i]);
    }
    if(s.size()==n)
    {
        cout<<n<<"\n";
        return ;
    }
    if(s.size()==1)
    {
        cout<<n<<"\n";
        return ;
    }
    ans=0;
    ll ma=0;
    ll mi=INT_MAX;
    ll nc=0;
    for(i=1; i<=n; i++)
    {
        col[aarray[i]]++;
        if(col[aarray[i]]==1)
        {
            nc++;
            cnt[1]++;
            mi=min(mi,col[aarray[i]]);
            ma=max(ma,col[aarray[i]]);
        }
        else
        {
            cnt[col[aarray[i]]-1]--;
            cnt[col[aarray[i]]]++;
            ma=max(ma,col[aarray[i]]);
            if(mi==col[aarray[i]]-1)
            {
                if(cnt[col[aarray[i]]-1]==0)
                {
                    mi=col[aarray[i]];
                }
            }
            else
            {
                mi=min(mi,col[aarray[i]]);
            }
        }
        //cout<<i<<" "<<ma<<" "<<mi<<" "<<cnt[ma]<<" "<<cnt[mi]<<endl;
        if(ma==mi)
        {
            if(nc==1)
            {
                ans=max(ans,col[aarray[i]]-1);
            }
        }
        if(ma!=mi)
        {
            if(ma*cnt[ma]+1==i)
            {
                ans=max(ans,i);
            }

            else
            {
                if(((nc)*mi)+1==i)
                {
                    ans=max(ans,i);
                }

            }
            //cout<<i<<" "<<ans<<endl;
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

