
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
    string str,ptr,st;
    ll a,b,c,d,e,f,x,y,k,t,A=0,B=0,L,j,i,l,r,m,n,C=0,sum=0,sum1=0;
    vector<ll>v,v1;
    ll ans=0;
    queue<ll>qu;
    cin>>a>>c;
    while(a)
    {
        b=a%3;
        v.push_back(b);
        a/=3;
    }
    while(c)
    {
        b=c%3;
        v1.push_back(b);
        c/=3;
    }
    l=max(v1.size(),v.size());
    v1.resize(l,0);
    v.resize(l,0);
    reverse(v1.begin(),v1.end());
    reverse(v.begin(),v.end());

    ll c1=1;
    for(i=l-1; i>=0;i--)
    {
        x=v[i];
        y=v1[i];
        ans+=c1*((y-x+3)%3);
        c1=c1*3;
    }
    cout<<ans<<endl;


    return 0;
}
