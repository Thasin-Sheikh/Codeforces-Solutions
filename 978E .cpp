///*Bismillahir Rahmanir Rahim***///
/***Stay_Home_Stay_Safe***/
///**Author Thasin Sheikh**///
#include<bits/stdc++.h>
using namespace std;
#define MAX 1e6+10
#define MOD 1000000007
#define PI 3.14159265359
#define makefast__  ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using ll=long long int  ;
using dl =double;
using ull=unsigned long long;
const int N = 2e5 + 10;
ll aarray[N];
ll magic[505][505];
vector<ll>primes;
bool ok[1000001];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,w,k,t,a,b,c;
    ll Min=INT_MAX,Max=INT_MIN;
    ll sum=0;
    cin>>n>>w;
    for(i=1;i<=n;i++)
    {
        cin>>aarray[i];
        sum+=aarray[i];
        Min=min(Min,sum);
        Max=max(Max,sum);
    }
    if(Max>w)
    {
        cout<<0<<endl;
        return 0;
    }
    if(Max<=0)
    {
        a=w;
    }
    else a=w-Max;
    if(Min<=0)
    {
        b=abs(Min);
    }
    else b=0;
    cout<<max(0LL,a-b+1)<<endl;
    return 0;
}



