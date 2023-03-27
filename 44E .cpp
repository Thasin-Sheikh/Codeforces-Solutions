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
    ll a,b;
    cin>>k>>a>>b;
    cin>>str;
    l=k*a;
    r=k*b;
    n=str.size();
    if(n<l||n>r)
    {
        cout<<"No solution"<<"\n";
        return ;
    }
    ll d=n-l;
    ll ex=d/k;
    ll rem=d%k;
    j=0;
    //cout<<d<<" "<<rem<<" "<<ex<<endl;
    for(i=1;i<=k;i++)
    {
        ll c=a+ex;
        if(rem)
        {
            c++;
            rem--;
        }
        for(;j<str.size()&&c;j++)
        {
            cout<<str[j];
            c--;
        }
        cout<<"\n";
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
/*t=1;
    while(t--)
    {
        solve();
    }
*/
cin>>n>>m;
ll pro=1;
ll sum=0;
for(i=1;;i++)
{
    if(pow(5*1.0,i)>n)
    {
        break;
    }
    sum+=n/(pow(5*1.0,i));
}
cout<<sum<<endl;
}


