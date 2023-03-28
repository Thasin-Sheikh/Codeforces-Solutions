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
    ll i,j,n,m,k,t,a,n1,n2;
    cin>>n>>n1>>n2;
    vector<ll>v;
    for(i=1;i<=n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    ll f,s,f1,s1;
    f=min(n1,n2);
    s=max(n1,n2);
    f1=f;
    s1=s;
    dl ff=0,fs=0;
    while(f)
    {
        ff+=v.back();
        v.pop_back();
        f--;
    }
    ff/=f1;
    while(s)
    {
        fs+=v.back();
        s--;
        v.pop_back();
    }
    fs/=s1;
    ff+=fs;
    cout<<setprecision(50)<<ff<<"\n";

    return 0;
}

