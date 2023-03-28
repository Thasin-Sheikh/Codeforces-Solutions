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
    ll i,j,n,m,k,t,h1,h2,a,b;
    cin>>h1>>h2;
    cin>>a>>b;
    h1+=(a*8);
    if(b>=a)
    {
        if(h1<h2)
        {
            cout<<-1<<"\n";
        }
        else cout<<0<<"\n";
        return 0;
    }
    if(h1>=h2)
    {
        cout<<0<<"\n";
        return 0;
    }
    n=a-b;
    t=h2-h1;
    n*=12;
    m=t/n;
    if(t%n)
    {
        m++;
    }
    cout<<m<<"\n";


    return 0;
}




