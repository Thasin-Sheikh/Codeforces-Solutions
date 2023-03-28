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
ll l[300000+10],r[300000+10];
ll premn[300000+10],premx[300000+10],sufmn[300000+10],sufmx[300000+10];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,k,a=0,b;
    vector<pair<ll,ll>>v;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>l[i]>>r[i];
    }
    premn[0]=INT_MAX;
    premx[0]=0;
    for(i=1;i<=n;i++)
    {
        premx[i]=max(premx[i-1],l[i]);
        premn[i]=min(premn[i-1],r[i]);
    }
    sufmn[n+1]=INT_MAX;
    sufmx[n+1]=0;
    for(i=n;i>=1;i--)
    {
        sufmn[i]=min(sufmn[i+1],r[i]);
        sufmx[i]=max(sufmx[i+1],l[i]);
    }
    for(i=1;i<=n;i++)
    {
        b=min(premn[i-1],sufmn[i+1]);
        ll c=max(premx[i-1],sufmx[i+1]);
        a=max(a,b-c);
    }
    cout<<a<<endl;


    return 0;
}


