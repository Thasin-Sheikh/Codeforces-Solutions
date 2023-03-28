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
using ull=unsigned long long;
const int N = 2e5 + 10;
ll aarray[N];
ll magic[505][505];
vector<ll>primes;
bool ok[1000001];
void seive()
{
    ll i,j,m,k;
    memset(ok,true,sizeof(ok));
    ok[1]=ok[0]=false;
    for(i=2; i<=N; i++)
    {
        if(ok[i])
        {
            primes.push_back(i);
            for(j=2*i; j<=N; j+=i)
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
    ll i,j,n,m,k,t,r,c;
    cin>>r>>c;
    if(r==1&&c==1)
    {
        cout<<0<<endl;
        return 0;
    }
    seive();
    k=0;
    for(i=1;i<=r;i++)
    {
        magic[i][1]=primes[k];
        k++;
    }
    ll p=2;
    if(r==1)
    {
        for(i=2;i<=c+1;i++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
        return 0;
    }
    if(c==1)
    {
        for(i=2;i<=r+1;i++)
        {
            cout<<i<<endl;
        }
        return 0;
    }
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            magic[i][j]=i*(j+r);
        }
    }
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            cout<<magic[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}



