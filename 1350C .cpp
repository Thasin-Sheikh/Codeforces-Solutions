
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
ll magic[101][101];
vector<ll>primes;
bool prime[1000001];
ll gcd[100000+10];
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
    }
    gcd[1]=aarray[1];
    gcd[n]=aarray[n];
    for(i=n-1;i>1;i--)
    {
        gcd[i]=__gcd(aarray[i],gcd[i+1]);
    }
    for(i=1;i<n;i++)
    {
        x=__gcd(aarray[i],gcd[i+1]);
        y=aarray[i]*gcd[i+1];
        y/=x;
        v.push_back(y);
    }
    for(i=0;i<v.size();i++)
    {
        A=(__gcd(v[i],A));

    }
    cout<<A<<endl;





    return 0;
}
