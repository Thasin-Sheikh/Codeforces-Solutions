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
ll mp[2001][2001];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,a[10000],b[10000],n,m,k,t;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a[i]>>b[i];
        a[i]+=1000;b[i]+=1000;
        mp[a[i]][b[i]]=1;
    }
    ll ans=0;
    for(i=1;i<n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            if((a[i]+a[j])%2==0&&(b[i]+b[j])%2==0)
            {
                ll n1=(a[i]+a[j])/2;
                ll n2=(b[i]+b[j])/2;
                if(mp[n1][n2]==1)
                {
                    ans++;
                }
            }
        }
    }
    cout<<ans<<endl;

    return 0;
}


