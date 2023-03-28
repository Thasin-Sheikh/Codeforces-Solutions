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
    ll i,j,n,m,k,t;
    cin>>n;
    vector<ll>v;
    for(i=1;i<=n;i++)
    {
        cin>>k;
        v.push_back(k);
    }
    sort(v.begin(),v.end());
    if(n%2)
    {
        cout<<v[(n-1)/2]<<endl;
        return 0;
    }
    ll p1,p2,t1=0,t2=0;
    n/=2;
    p1=v[n];
    p2=v[n-1];
    for(i=0;i<v.size();i++)
    {
        t1+=abs(p1-v[i]);
        t2+=abs(p2-v[i]);
    }
    if(t1<t2)
    {
        cout<<p1<<endl;
    }
    else cout<<p2<<endl;

    return 0;
}



