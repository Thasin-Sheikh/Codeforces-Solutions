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
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll a,b,c,d,e,f,x,y,k,t,q,p,A=0,mod,B=0,L,j,i,l,r,m,n,C=0,ans=0,sum=0,sum1=0;
    vector<ll>v,v1;
    queue<ll>qu;
    cin>>n;
    ll md=10007;
    for(i=1; i<=n; i++)
    {
        cin>>aarray[i];
    }
    sort(aarray,aarray+n+1);
    if(n%2)
    {
        for(i=1,j=n; i<=n/2,j>(n+1)/2; i++,j--)
        {
            L=((aarray[i]%md)*(aarray[j]%md))%md;
            L=(2*L)%md;
            A=(A+L)%md;
        }
        x=aarray[(n+1)/2];
        y=(x*x)%md;
        A=(A+y)%md;
    }
    else
    {
        for(i=1,j=n; i<=n/2,j>n/2; i++,j--)
        {
            L=((aarray[i]%md)*(aarray[j]%md))%md;
            L=(2*L)%md;
            A=(A+L)%md;
        }

    }
    cout<<A<<endl;

    return 0;
}


