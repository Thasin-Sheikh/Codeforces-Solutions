///*Bismillahir Rahmanir Rahim***///
/***Stay_Home_Stay_Safe***/
///**Author Thasin Sheikh**///
/*while(a)
    {
        if(a%2==0)
            dvi.push_back(0);
        else
            dvi.push_back(1);
        a/=2;
    }
    reverse(dvi.begin(),dvi.end());*/
#include<bits/stdc++.h>
using namespace std;
#define MAX 35000
#define makefast__  ios_base::sync_with_stdio(false);
using ll=long long int  ;
using dl =double;
const int N = 2e5 + 10;
ll aarray[200000+10];
ll magic[101][101];
vector<ll>primes;
bool fk[1000001];
ll lcm(ll n,ll m)
{
    return (n*m)/(__gcd(n,m));
}
ll ccount[1000001];
int main()
{
    makefast__
    string str[100001];
    ll a,c,d,e,f,x,y,t,A=0,B=0,L,j,i,l,r,n,C=0,sum=0,sum1=0,m,k,b;
    vector<pair<ll,ll>>v;
    ll count[10001];
    set<ll>sl;
    vector<ll>ans;
    list<ll>li;
    cin>>n>>m>>k;
    memset(count,0,sizeof(count));
    for(i=1;i<=n;i++)
    {
        cin>>a>>b;
        v.push_back(make_pair(b,a));
    }
    sort(v.begin(),v.end());
    for(auto it=v.begin();it!=v.end();it++)
    {
        x=it->second;
        if(count[x]==0)
        {
            A+=it->first;
            count[x]=1;
        }
    }
    cout<<min(A,k)<<endl;



}
