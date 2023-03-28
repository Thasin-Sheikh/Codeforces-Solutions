
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
ll aarray[N];
ll magic[505][505];
vector<ll>primes;
bool ok[1000001];
ll a[55][55],b[55][55];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,k,t;
    cin>>n>>m;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            cin>>a[i][j];
        }
    }
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            cin>>b[i][j];
        }
    }
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            if(a[i][j]>b[i][j])
            {
                swap(a[i][j],b[i][j]);
            }
        }
    }
    for(i=1;i<=n;i++)
    {
        for(j=2;j<=m;j++)
        {
            if(a[i][j]<=a[i][j-1])
            {
                cout<<"Impossible"<<endl;
                return 0;
            }
        }
    }
    for(i=1;i<=m;i++)
    {
        for(j=2;j<=n;j++)
        {
            if(a[j][i]<=a[j-1][i])
            {
                cout<<"Impossible"<<endl;
                return 0;
            }
        }
    }
    for(i=1;i<=n;i++)
    {
        for(j=2;j<=m;j++)
        {
            if(b[i][j]<=b[i][j-1])
            {
                cout<<"Impossible"<<endl;
                return 0;
            }
        }
    }
    for(i=1;i<=m;i++)
    {
        for(j=2;j<=n;j++)
        {
            if(b[j][i]<=b[j-1][i])
            {
                cout<<"Impossible"<<endl;
                return 0;
            }
        }
    }
    cout<<"Possible"<<endl;
    return 0;
}



