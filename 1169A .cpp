
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
    ll a,b,c,d,e,f,x,y,k,t,A=0,B=0,L,j,i,l,r,m,n,C=0,ans=0,sum=0,sum1=0;
    vector<ll>v,v1;
    queue<ll>qu;
    cin>>n>>a>>x>>b>>y;
    f=2*n;
    while(f--)
    {
        if(a!=x)
        {
            a=(a+1)%n;
            if(a==0)
            {
                a=n;
            }
        }
        if(b!=y)
        {
            b=(b-1)%n;
            if(b==0)
            {
                 b=n;
            }
        }
        if(a==b)
        {
            //cout<<a<<" "<<b<<endl;
            cout<<"YES"<<endl;
            return 0;
        }
        if(a==x||b==y)
        {
            break;
        }
        //cout<<a<<" "<<b<<endl;
    }
    cout<<"NO"<<endl;

    return 0;
}
