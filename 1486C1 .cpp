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
    bool yes=false;
    vector<ll>v;
    cin>>n;
    cout<<'?'<<" "<<1<<" "<<n<<endl;
    fflush(stdout);
    ll in,o;
    cin>>in;
    if(in!=1)
    {
        cout<<'?'<<" "<<1<<" "<<in<<endl;
        fflush(stdout);
        cin>>o;
        if(o==in)
        {
            yes=true;
        }
    }
    ll hi;
    if(yes)
    {
        ll low=1,high=in-1;
        while(low<=high)
        {
            ll mid=(low+high)/2;
            cout<<'?'<<" "<<mid<<" "<<in<<endl;
            fflush(stdout);
            cin>>hi;
            if(hi==in)
            {
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }
        cout<<'!'<<" "<<high<<endl;
        fflush(stdout);
    }
    else
    {
        ll low=in+1,high=n;
        while(low<=high)
        {
            ll mid=(low+high)/2;
            cout<<'?'<<" "<<in<<" "<<mid<<endl;
            fflush(stdout);
            cin>>hi;
            if(hi==in)
            {
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        cout<<'!'<<" "<<low<<endl;
        fflush(stdout);

    }
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


