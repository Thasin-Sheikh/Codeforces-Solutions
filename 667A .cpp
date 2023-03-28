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
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //tle khaite chas to endl use kor
    makefast__
    string str;
    ll i,j,n,m,k,t;
    dl d,h,v,e,ans;
    cin>>d>>h>>v>>e;
    dl a,b;
    b=4*v;
    b/=PI;
    b/=(d*d);
    b-=e;
    b=h/b;
    if(b<0)
    {
        cout<<"NO"<<"\n";
        return 0;
    }
    cout<<"YES"<<"\n";
    cout<<setprecision(15)<<b<<"\n";
    return 0;
}




