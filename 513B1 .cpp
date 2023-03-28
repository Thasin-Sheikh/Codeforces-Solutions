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
vector<ll>v;
ll  fun()
{
    ll val,sum=0,i,j;
    for(i=0; i<v.size(); i++)
    {
        val=v[i];
        for(j=i;j<v.size();j++)
        {
            val=min(v[j],val);
            sum+=val;

        }

    }
    return sum;
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //tle khaite chas to endl use kor
    makefast__
    string str;
    ll i,j,n,m,k,t;
    cin>>n>>m;
    k=0;
    for(i=1; i<=n; i++)
    {
        v.push_back(i);
    }
    do
    {
        t=fun();
        k=max(k,t);
    }
    while(next_permutation(v.begin(),v.end()));
    //cout<<k<<endl;
    ll p=0;
    v.clear();
    for(i=1; i<=n; i++)
    {
        v.push_back(i);
    }
    do
    {

        p=fun();
        if(p==k&&m)
        {
            m--;
        }
        if(m==0)
        {
            break;
        }
    }
    while(next_permutation(v.begin(),v.end()));
    for(auto c:v)
    {
        cout<<c<<" ";
    }
    cout<<"\n";


    return 0;
}
