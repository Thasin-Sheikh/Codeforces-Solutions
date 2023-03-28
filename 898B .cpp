
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
    ll a,b,c,d,e,f,x,y,k,t,A=0,mod,B=0,L,j,i,l,r,m,n,C=0,ans=0,sum=0,sum1=0;
    vector<ll>v,v1;
    queue<ll>qu;
    cin>>n>>a>>b;
    for(i=1;i<=10000000;i++)
    {
        x=a*i;
        y=n-x;
        if(y%b==0&&y>=0)
        {
            cout<<"YES"<<endl;
            cout<<i<<" "<<y/b<<endl;
            return 0;
        }
        ll x1, x2;
        x1=b*i;
        x2=n-x1;
        if(x2%a==0&&x2>=0)
        {
            cout<<"YES"<<endl;
            cout<<x2/a<<" "<<i<<endl;
            return 0;
        }

    }
    cout<<"NO"<<endl;

    return 0;
}
