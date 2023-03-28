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
ll ttime[300000+10];
ll magic[101][101];
vector<ll>primes;
bool prime[1000001];
int main()
{
    makefast__
    string str;
    ll a,b,c,d,e,f,x=-1,y,k,t,jor=0,bjor=0,A=0,B=0,L,j,i,l,r,m,n,C=0,ans=0,sum=0,sum1=0;
    vector<ll>v,v1;
    queue<ll>qu;
    cin>>n>>m;
    for(i=1; i<=n; i++)
    {
        cin>>aarray[i];
    }
    for(i=1; i<=m; i++)
    {
        cin>>ttime[i];
    }
    for(i=2; i<=n; i++)
    {
        y=aarray[i]-aarray[i-1];
        v.push_back(y);
    }
    ll gcd=v[0];
    for(i=1;i<v.size();i++)
    {
        gcd=(__gcd(gcd,v[i]));
    }
    for(i=1;i<=m;i++)
    {
        if(gcd%ttime[i]==0)
        {
            x=i;
            break;
        }
    }
    if(x==-1)
        cout<<"NO"<<endl;
    else
    {
        cout<<"YES"<<endl;
        cout<<aarray[1]<<" "<<x<<endl;
    }

    return 0;
}
