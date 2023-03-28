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
    bool yes=true;
    vector<ll>v,vcopy;
    vector<ll>ans;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>l;
        v.push_back(l);
    }
    vcopy=v;
    sort(vcopy.rbegin(),vcopy.rend());
    ll fl=n-1;
    ll cur=0;
    while(fl--)
    {
        ll a=vcopy.back();
        vcopy.pop_back();
        vector<ll>va;
        for(i=0;i<v.size();i++)
        {
            if(v[i]==a)
            {
                if(i!=0)
                {
                    cur++;
                }
                ans.push_back(i);
                for(j=i+1;j<v.size();j++)
                {
                    va.push_back(v[j]);
                }
                for(j=0;j<i;j++)
                {
                    va.push_back(v[j]);
                }
                break;
            }
        }
        v.clear();
        v=va;
    }
    cout<<cur<<"\n";
    for(i=0;i<ans.size();i++)
    {
        if(ans[i]==0)
        {
            continue;
        }

        cout<<i+1<<" "<<n<<" "<<ans[i]<<"\n";
    }
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

