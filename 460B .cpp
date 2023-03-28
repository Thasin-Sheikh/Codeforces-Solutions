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
    ll i,j,n,m,k,a,b,c,t;
    cin>>a>>b>>c;
    vector<ll>v;
    for(i=1;i<=81;i++)
    {
        t=b*pow(i,a)+c;
        ll x=0;
        n=t;
        while(n>0)
        {
            k=n%10;
            x+=k;
            n/=10;
        }
        if(x==i&&t<1000000000)
        {
            v.push_back(t);
        }
    }
    cout<<v.size()<<'\n';
    for(auto cc:v)
    {
        cout<<cc<<" ";
    }
    cout<<'\n';

    return 0;
}

