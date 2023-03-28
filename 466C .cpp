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
ll aarray[500000+10];
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
    for(i=1;i<=n;i++)
    {
        cin>>aarray[i];
        sum+=aarray[i];
    }
    if(sum%3)
    {
        cout<<0<<endl;
        return 0;
    }
    x=sum/3;
    y=2*x;
    ll z=0;
    for(i=1;i<n;i++)
    {
        A+=aarray[i];
        if(A==y)
        {
            ans+=z;
        }
        if(A==x)
        {
            z++;
        }
    }
    cout<<ans<<endl;

    return 0;
}


