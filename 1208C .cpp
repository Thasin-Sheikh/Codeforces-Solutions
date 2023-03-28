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
vector<ll>primes;
bool ok[1000001];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m=0,k,t;
    cin>>n;
    ll magic[n+5][n+5];
    for(i=0;i<n/2;i++)
    {
        for(j=0;j<n/2;j++)
        {
            magic[i][j]=4*m+1;
            magic[i][j+n/2]=4*m+2;
            magic[i+n/2][j]=4*m+3;
            magic[i+n/2][j+n/2]=4*m;
            m++;
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<magic[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}


