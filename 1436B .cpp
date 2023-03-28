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
const int N = 3e5 + 10;
ll aarray[N];
ll magic[505][505];
vector<ll>primes;
bool ok[100001];
void seive()
{
    ll i,j,n;
    memset(ok,true,sizeof(ok));
    ok[0]=ok[1]=false;
    for(i=2; i<=10001; i++)
    {
        if(ok[i])
        {
            for(j=2*i; j<=10001; j+=i)
            {
                ok[j]=false;
            }
        }
    }
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,k,t;
    seive();
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=1; i<n; i++)
        {
            for(j=1; j<n; j++)
            {
                magic[i][j]=1;
            }
        }
        ll sum=n-1;
        for(i=1;; i++)
        {
            if(ok[sum+i]==true&&ok[i]==false)
            {
                k=i;
                break;

            }
        }
        sum=k*(n-1);
        for(i=1; i<n; i++)
        {
            magic[i][n]=k;
            magic[n][i]=k;
        }
        for(i=1;; i++)
        {
            if(ok[sum+i]==true&&ok[i]==false)
            {
                k=i;
                break;

            }
        }
        magic[n][n]=k;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                cout<<magic[i][j]<<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}



