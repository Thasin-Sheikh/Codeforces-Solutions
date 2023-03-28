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
ll aarray[200000+10];
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
    cin>>n>>k;
    x=__builtin_popcount(n);
    if(k<x||k>n)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    memset(aarray,0,sizeof(aarray));
    while(n)
    {
        if(n%2)
        {
            x=pow(2,A*1.0);
            qu.push(x);
        }
        n/=2;
        A++;
    }
    ll cnt=qu.size();
    //cout<<cnt<<endl;
    while(cnt<k)
    {
        //cout<<cnt<<endl;
        f=qu.front();
        if(f!=1)
        {
            qu.pop();
            qu.push(f/2);
            qu.push(f/2);
            cnt++;
        }
        else
        {
            qu.pop();
            qu.push(1);

        }
    }
    //cout<<qu.size()<<endl;
    if(qu.size()!=k)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    cout<<"YES"<<endl;
    while(!qu.empty())
    {
        a=qu.front();
        qu.pop();
        cout<<a<<" ";
    }
    return 0;
}


