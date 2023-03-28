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
ll a[N],b[N];
ll magic[505][505];
vector<ll>primes;
bool ok[1000001];
map<ll,ll>mp;
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,k,t,ans=0,f=0;
    set<ll>sl;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a[i]>>b[i];
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i!=j&&b[i]==a[j])
            {
                a[j]=-1;
                f++;
            }
        }
    }
    cout<<n-f<<endl;

    return 0;
}



