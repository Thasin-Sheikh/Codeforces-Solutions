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
void solve()
{
    ll n,q;
    string str;
    cin>>n>>q;
    cin>>str;
    ll l,r;
    while(q--)
    {
        bool yes=false;
        cin>>l>>r;
        ll i,j;
        if(l-2>=0)
        {
            for(i=l-2; i>=0; i--)
            {
                if(str[i]==str[l-1])
                {
                    yes=true;
                    break;
                }
            }
        }
        if(r<n){
        for(i=r; i<n; i++)
        {
            if(str[i]==str[r-1])
            {
                yes=true;
                break;
            }
        }
        }
        if(yes)
        {
            cout<<"YES"<<"\n";
        }
        else cout<<"NO"<<"\n";
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
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}

