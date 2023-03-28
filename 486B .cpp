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
ll magic[110][110],input[110][110];
vector<ll>primes;
bool prime[1000001];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,k,t;
    for(i=1;i<=101;i++)
    {
        for(j=1;j<=101;j++)
        {
            magic[i][j]=-1;
        }
    }
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            cin>>input[i][j];
        }
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            if(input[i][j]==1)
            {

            }
            else
            {
                for(k=1;k<=m;k++)
                {
                    magic[i][k]=0;
                }
                for(k=1;k<=n;k++)
                    magic[k][j]=0;
            }
        }
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            if(magic[i][j]==-1)
                magic[i][j]=1;

        }
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            ll x=0;
            for(k=1;k<=m;k++)
            {
                x|=magic[i][k];
            }
            for(k=1;k<=n;k++)
            {
                x|=magic[k][j];
            }
            if(x!=input[i][j])
            {
                cout<<"NO"<<endl;
                return 0;
            }
        }
    }
    cout<<"YES"<<endl;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            cout<<magic[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}


