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
ll aarray[200000+10];
ll magic[101][101];
vector<ll>primes;
bool ok[1000001];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,k,t,p;
    cin>>n;
    ll x=1;
    cout<<'?'<<" "<<x<<" "<<2<<endl;
    fflush(stdout);
    cin>>k;
    t=k;
    for(i=3;i<=n;i++)
    {
        cout<<'?'<<" "<<x<<" "<<i<<endl;
        fflush(stdout);
        cin>>p;
        aarray[i]=p-k;
        k=p;
    }
    cout<<'?'<<" "<<2<<" "<<3<<endl;
    fflush(stdout);
    cin>>k;
    aarray[2]=k-aarray[3];
    aarray[1]=t-aarray[2];
    cout<<'!'<<" ";
    for(i=1;i<=n;i++)
    {
        cout<<aarray[i]<<" ";
        fflush(stdout);
    }
    cout<<endl;
    fflush(stdout);

    return 0;
}


