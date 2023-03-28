
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
int main()
{
    makefast__
    string str;
    ll a,b,c,d,e,f,x,y,k,t,A=INT_MAX,B=0,L,j,i,l,r,m,n,C=0,ans=0,sum=0,sum1=0;
    vector<ll>v,v1;
    queue<ll>qu;
    cin>>n;
    for(i=2; i*i<=n; i++)
    {
        if(n%i==0)
        {
            B=1;
            break;
        }
    }
    if(!B)
    {
        cout<<1<<endl;
        return 0;
    }
    if(n==2)
    {
        cout<<1<<endl;
        return 0;
    }
    if(n%2==0&&n>2)
    {
        cout<<2<<endl;
        return 0;
    }
    n-=2;
    ll no=0;
    for(i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            no=1;
            break;
        }
    }
    if(no)
        cout<<3<<endl;
    else cout<<2<<endl;

}
