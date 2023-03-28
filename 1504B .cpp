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
    string str,a,b;
    bool yes=true;
    vector<ll>v;
    cin>>n;
    cin>>a>>b;
    vector<ll>zero(n+5),one(n+5);
    for(i=0; i<n; i++)
    {
        if(i==0)
        {
            if(a[i]=='0')
            {
                zero[i]=1;
                one[i]=0;

            }
            else one[i]=1,zero[i]=0;
        }
        else
        {
            if(a[i]=='0')
            {
                zero[i]=1+zero[i-1];
                one[i]=one[i-1];

            }
            else one[i]=1+one[i-1],zero[i]=zero[i-1];

        }
    }
    sum=0;
    for(i=n-1; i>=0; i--)
    {
        if(sum%2)
        {
            if(a[i]=='0')
            {
                a[i]='1';
            }
            else a[i]='0';
        }
        if(a[i]!=b[i])
        {
            ll tz,to;
            tz=zero[i];
            to=one[i];
            sum++;
            if(tz!=to)
            {
                //cout<<i<<endl;
                //scout<<zero[i]<<" "<<one[i]<<endl;
                cout<<"NO"<<"\n";
                return ;
            }
        }
    }
    cout<<"YES"<<"\n";
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


