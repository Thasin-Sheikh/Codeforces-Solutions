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
ll flag[2005][2005],sumr[2005][2005],sumc[2005][2005];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str[100000];
    ll i,j,n,m,k,t;
    cin>>n>>m>>k;
    for(i=1; i<=n; i++)
    {
        cin>>str[i];
        for(j=0; j<str[i].length(); j++)
        {
            if(str[i][j]=='*')
                flag[i][j]=0;
            else flag[i][j]=1;
        }
    }
    for(i=1;i<=n;i++)
    {
        for(j=0;j<m;j++)
        {
            sumr[i][j]=sumr[i][j-1]+flag[i][j];
        }
    }
    for(j=0;j<m;j++)
    {
        for(i=1;i<=n;i++)
        {
            sumc[j][i]=sumc[j][i-1]+flag[i][j];
        }
    }
    ll ans=0;
    for(i=1;i<=n;i++)
    {
        for(j=k-1;j<m;j++)
        {
            if(sumr[i][j]-sumr[i][j-k]==k)
                ans++;
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=k;j<=n;j++)
        {
            if(sumc[i][j]-sumc[i][j-k]==k)
                ans++;
        }
    }
    if(k==1)
        ans/=2;
    cout<<ans<<endl;
    return 0;
}


