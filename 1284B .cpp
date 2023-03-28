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
bool ok[1000001];
vector<pair<ll,ll>>vp;
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,k,t,a;
    cin>>n;
    vector<ll>fmax,fmin;
    for(i=1; i<=n; i++)
    {
        cin>>m;
        vector<ll>v;
        for(j=1; j<=m; j++)
        {
            cin>>a;
            v.push_back(a);
        }
        reverse(v.begin(),v.end());
        if(is_sorted(v.begin(),v.end()))
        {
            fmax.push_back(v[m-1]);
            fmin.push_back(v[0]);
        }
    }
    sort(fmax.begin(),fmax.end());
    sort(fmin.begin(),fmin.end());
    ll ans=n*n;
     a=0;
    for(i=0;i<fmin.size();i++)
    {
        ll lb=upper_bound(fmax.begin(),fmax.end(),fmin[i])-fmax.begin();
        a+=lb;
    }
    cout<<ans-a<<endl;

    return 0;
}


