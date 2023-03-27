
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
ll p[1000],q[1000];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //tle khaite chas to endl use kor
    makefast__
    string str;
    ll i,j,n,a,b,c,m,k,t;
    cin>>n>>m;
    for(i=1;i<=n+1;i++)
    {
        cin>>p[i];
    }
    for(i=1;i<=m+1;i++)
    {
        cin>>q[i];
    }
    if(n>m)
    {
        if(p[1]>0&&q[1]>0||p[1]<0&&q[1]<0)
        {
            cout<<"Infinity"<<"\n";
        }
        else
        {
            cout<<"-Infinity"<<"\n";
        }
        return 0;
    }
    if(n==m)
    {
        a=p[1],b=q[1];
        c=__gcd(a,b);
        a/=c,b/=c;
        if(a<0||b<0)
        cout<<"-"<<abs(a)<<'/'<<abs(b)<<"\n";
        else cout<<abs(a)<<'/'<<abs(b)<<"\n";
        return 0;
    }
    cout<<"0/1"<<"\n";
    return 0;
}




