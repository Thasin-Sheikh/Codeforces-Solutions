
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
ll aarray[300000+10];
ll magic[101][101];
vector<ll>primes;
bool prime[1000001];
int main()
{
    makefast__
    string str;
    ll a,b,c,d,e,f,x,y,k,t,A=0,B=0,L,j,i,l,r,m,n,C=0,ans=0,sum=0,sum1=0;
    vector<ll>v,v1;
    queue<ll>qu;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>aarray[i];
        sum+=aarray[i];
        v.push_back(aarray[i]);
    }
    if(n==1)
    {
        cout<<sum<<endl;
        return 0;
    }
    sort(aarray,aarray+n+1);
    i=1;
    sum1=sum;
    while(i<n)
    {
        sum+=aarray[i];
        sum1-=aarray[i];
        sum+=sum1;
        i++;

    }
    cout<<sum<<endl;

    return 0;
}
