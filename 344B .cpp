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
    ll i,j,n,m,k,t,a,b,c,x,y,z;
    cin>>a>>b>>c;
    y=(b+c-a);
    z=(c+a-b);
    x=(b+a-c);
    if(x<0 or y<0||z<0||x%2!=0||y%2!=0||z%2!=0)
    {
        cout<<"Impossible"<<"\n";
        return 0;
    }
    cout<<x/2<<" "<<y/2<<" "<<z/2<<"\n";
    return 0;
}
