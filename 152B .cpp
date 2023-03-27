///*Bismillahir Rahmanir Rahim***///
/***Stay_Home_Stay_Safe***/
///**Author Thasin Sheikh**///
#include<bits/stdc++.h>
using namespace std;
#define MAX 1e6+10
#define MOD 1000000007
#define PI 3.14159265359
#define makefast__  ios_base::sync_with_stdio(false);
using ll=long long int  ;
using dl =double;
const int N = 2e5 + 10;
ll aarray[200000+10];
ll magic[101][101];
vector<ll>primes;
bool prime[1000001];
dl solve(ll a,ll b,ll t1,ll t2,ll r)
{
    dl s1,s2,s3;
    a*=t1;
    b*=t2;
    s1=a*(r/100.0);
    s2=a-s1;
    s3=b+s2;
    return s3;


}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll a[10001],b[10001],e,f,y,k,t,q,p,A=0,mod,B=0,L,j,i,l,r,m,n,C=0,sum=0,sum1=0;
    vector<pair<dl,dl>>v,v1;
    vector<ll>index;
    vector<dl>rankk;
    queue<ll>qu;
    dl c,d,x;
    ll t1,t2,reduce;
    cin>>n>>t1>>t2>>reduce;
    dl s1,s2,s3,s4,s5,s6,s7;
    for(i=1; i<=n; i++)
    {
        cin>>a[i]>>b[i];
        c=solve(a[i],b[i],t1,t2,reduce);
        d=solve(b[i],a[i],t1,t2,reduce);
        x=max(c,d);
        v.push_back(make_pair(-x,i));

    }
    sort(v.begin(),v.end());
    //reverse(v.begin(),v.end());
    for(auto it=v.begin(); it!=v.end(); it++)
    {
        ll in=it->second;
        dl gulu=-it->first;
        printf("%lld %.2f\n",in,gulu);
    }

    return 0;
}

