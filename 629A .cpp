///*Bismillahir Rahmanir Rahim***///
/***Stay_Home_Stay_Safe***/
///**Author Thasin Sheikh**///
#include<bits/stdc++.h>
using namespace std;
#define MAX 35000
#define MOD 1000000007
#define PI 3.14159265359
#define makefast__  ios_base::sync_with_stdio(false);
using ll=long long int  ;
using dl =double;
const int N = 2e5 + 10;
ll aarray[200000+10];
char  magic[101][101];
vector<ll>primes;
bool prime[1000001];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll a,b,c,d,e,f,x,y,k,t,A=0,mod,B=0,L,j,i,l,r,m,n,C=0,ans=0,sum=0,sum1=0;
    vector<ll>v,v1;
    queue<ll>qu;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            cin>>magic[i][j];
        }
    }
    for(i=1; i<=n; i++)
    {
        r=0;
        for(j=1; j<=n; j++)
        {
            if(magic[i][j]=='C')
                r++;
        }
            ans+=r*(r-1)/2;
    }
    for(i=1; i<=n; i++)
    {
        c=0;
        for(j=1; j<=n; j++)
        {
            if(magic[j][i]=='C')
                c++;
        }
            ans+=c*(c-1)/2;
    }
    cout<<ans<<endl;
    return 0;
}
