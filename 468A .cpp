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
    cin>>n;
    if(n<=3)
    {
        cout<<"NO"<<"\n";
        return;
    }
    cout<<"YES"<<"\n";
    if(n==4)
    {
        cout<<1<<" "<<'*'<<" "<<2<<" "<<'='<<" "<<2<<"\n";
        cout<<3<<" "<<'*'<<" "<<4<<" "<<'='<<" "<<12<<"\n";
        cout<<12<<" "<<'*'<<" "<<2<<" "<<'='<<" "<<24<<"\n";
        return ;
    }
    if(n==5)
    {
        cout<<5<<" "<<'-'<<" "<<3<<" "<<'='<<" "<<2<<"\n";
        cout<<2<<" "<<'+'<<" "<<1<<" "<<'='<<" "<<3<<"\n";
        cout<<3<<" "<<'*'<<" "<<2<<" "<<'='<<" "<<6<<"\n";
        cout<<6<<" "<<'*'<<" "<<4<<" "<<'='<<" "<<24<<"\n";
        return ;
    }
    if(n%2==0)
    {
        cout<<1<<" "<<'*'<<" "<<2<<" "<<'='<<" "<<2<<"\n";
        cout<<3<<" "<<'*'<<" "<<4<<" "<<'='<<" "<<12<<"\n";
        cout<<12<<" "<<'*'<<" "<<2<<" "<<'='<<" "<<24<<"\n";
        for(i=n; i>5; i-=2)
        {
            cout<<i<<" "<<'-'<<" "<<i-1<<" "<<'='<<" "<<1<<"\n";
            cout<<1<<" "<<'*'<<" "<<24<<" "<<'='<<" "<<24<<"\n";
        }
        //cout<<1<<" "<<'*'<<" "<<24<<" "<<'='<<" "<<24<<"\n";
    }
    else
    {
        cout<<5<<" "<<'-'<<" "<<3<<" "<<'='<<" "<<2<<"\n";
        cout<<2<<" "<<'+'<<" "<<1<<" "<<'='<<" "<<3<<"\n";
        cout<<3<<" "<<'*'<<" "<<2<<" "<<'='<<" "<<6<<"\n";
        cout<<6<<" "<<'*'<<" "<<4<<" "<<'='<<" "<<24<<"\n";
        for(i=6;i<n;i+=2)
        {
            cout<<i+1<<" "<<'-'<<" "<<i<<" "<<'='<<" "<<1<<"\n";
            cout<<1<<" "<<'*'<<" "<<24<<" "<<'='<<" "<<24<<"\n";

        }
        //cout<<1<<" "<<'*'<<" "<<24<<" "<<'='<<" "<<24<<"\n";
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

}
