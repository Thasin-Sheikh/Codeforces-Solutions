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
ll bal[1010][1010],dhur[1010][1010];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,k,t,ans=1;
    cin>>n>>m;
    ll a;
    for(i=1; i<=n; i++)
    {
        cin>>a;
        for(j=1; j<=a; j++)
        {
            bal[i][j]=1;
        }
        dhur[i][a+1]=1;
    }
    for(i=1; i<=m; i++)
    {
        cin>>a;
        for(j=1; j<=a; j++)
        {
            bal[j][i]=1;
        }
        dhur[a+1][i]=1;
    }
    /*for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            cout<<bal[i][j]<<" "<<dhur[i][j]<<endl;
        }
        cout<<endl;

    }*/
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            if(bal[i][j]==1&&dhur[i][j]==1)
            {
                cout<<0<<endl;
                return 0;
            }
        }
    }
    ll unoccupied=0;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            if(bal[i][j]==0&&dhur[i][j]==0)
                unoccupied++;
        }
    }
    for(i=1;i<=unoccupied;i++)
        ans=(ans*2)%MOD;
    cout<<ans<<endl;

    return 0;
}


