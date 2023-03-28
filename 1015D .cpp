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
    ll a,b,c,d,e,f,x=1,y=1,k,t,A=0,mod,B=0,L,j,i,l,r,m,n,C=0,ans=0,sum=0,sum1=0;
    vector<ll>v,v1;
    queue<ll>qu;
    ll dis;
    cin>>n>>m>>dis;
    if(m>dis||(n-1)*m<dis)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    cout<<"YES"<<endl;
   while(dis>0)
   {
       d=dis/m;
       if(dis%m!=0)
        d++;
       x+=d*y;
       cout<<x<<" ";
       y*=-1;
       dis-=d;
       m--;
   }

    return 0;
}
