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
bool ok[10001];
ll a[100000],b[100000];
map<ll,ll>mp;
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,k,t;
    cin>>n>>m;
    set<ll>sl;
    for(i=1; i<=m; i++)
    {
        cin>>a[i]>>b[i];
        sl.insert(a[i]);
        sl.insert(b[i]);

    }
    ll p;
    for(i=1; i<=n; i++)
    {
        if(sl.find(i)==sl.end())
        {
            p=i;
            break;
        }
    }
    cout<<n-1<<endl;
    for(i=1;i<=n;i++)
    {
        if(i!=p)
            cout<<p<<" "<<i<<endl;
    }
    return 0;
}


