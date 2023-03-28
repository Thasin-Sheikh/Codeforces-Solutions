
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
int main()
{
    makefast__
    string str;
    ll  a,b,c,d,e,f,x,y,k,t,L,j,i,l,r,m,n,C=0,ans=0,sum=0,sum1=0;
    vector<ll>v,v1;
    queue<ll>qu;
    dl A,B=-1;
    cin>>n;
   for(i=1;i<=n/2;i++)
   {
       x=n-i;
       if((__gcd(x,i))==1)
       {
           A=i/x*1.0;
           if(A>B)
           {
               a=i;
               b=n-i;
           }
       }
   }
   cout<<a<<" "<<b<<endl;

    return 0;
}
