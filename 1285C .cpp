///*Bismillahir Rahmanir Rahim***///
/***Stay_Home_Stay_Safe***/
///**Author Thasin Sheikh**///
/*while(a)
    {
        if(a%2==0)
            dvi.push_back(0);
        else
            dvi.push_back(1);
        a/=2;
    }
    reverse(dvi.begin(),dvi.end());*/
#include<bits/stdc++.h>
using namespace std;
#define MAX 35000
#define makefast__  ios_base::sync_with_stdio(false);
using ll=long long int  ;
using dl =double;
const int N = 2e5 + 10;
ll aarray[200000+10];
ll magic[101][101];
vector<ll>primes;
bool prime[1000001];
ll lcm(ll n,ll m)
{
    return (n*m)/(__gcd(n,m));
}
int main()
{
    makefast__
    string str;
    ll a=1,c,d,e,f,x,y,t,A,B,L,j,i,l,r,n,C=0,ans=0,sum=0,sum1=0,b=1;
    vector<ll>v,v1;
    queue<ll>qu;
    cin>>n;
    for(i=1; i*i<=n; i++)
    {
        if(n%i==0&&lcm(i,n/i)==n)
        {
            l=i;
        }
    }
    cout<<l<<" "<<n/l<<endl;




    return 0;

}
