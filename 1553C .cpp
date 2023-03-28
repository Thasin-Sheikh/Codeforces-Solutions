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
    ll i,j,k,m,n,l,r,q,p,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>str;
    ll one=0,two=0;
    ans=10;
    for(i=0;i<10;i++)
    {
        if(i%2==0)
        {
            if(str[i]!='?')
            {
                one+=(str[i]-'0');
            }
            else
            {
                one++;
            }
        }
        else
        {
            if(str[i]!='?')
            {
                two+=(str[i]-'0');
            }
        }
        ll ex=10-i-1;
        if(ex%2==0)
        {
            k=ex/2;
        }
        else
        {

            k=ex/2+1;
        }
        if(one>two+k)
        {
            ans=i+1;
            break;
        }
    }
    //cout<<ans<<endl;
    one=0,two=0;
    for(i=0;i<10;i++)
    {
        if(i%2==0)
        {
            if(str[i]!='?')
            {
                one+=(str[i]-'0');
            }
        }
        else
        {
            if(str[i]!='?')
            {
                two+=(str[i]-'0');
            }
            else
            {
                two++;
            }
        }
      //  cout<<i<<" "<<one<<" "<<two<<endl;
        ll ex=10-i-1;
        if(ex%2==0)
        {
            k=ex/2;
        }
        else
        {
            k=ex/2;
        }
        if(two>one+k)
        {
            ans=min(ans,i+1);
            break;
        }
    }
    cout<<ans<<"\n";
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

