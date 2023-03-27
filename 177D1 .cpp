
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
ll barry[100000+10];
ll magic[101][101];
vector<ll>primes;
bool prime[1000001];
int main()
{
    makefast__
    string str;
    ll a,b,c,d,e,f,x,y,t,A=0,B=0,L,j,i,l,r,m,n,C=0,ans=0,sum=0,sum1=0;
    vector<ll>v,v1;
    queue<ll>qu;
    cin>>n>>m>>c;
    for(i=1;i<=n;i++)
    {
        cin>>aarray[i];
    }
    for(i=1;i<=m;i++)
    {
        cin>>barry[i];
    }
    t=n-m+1;
    ll in=1;
    ll ses;
    ses=m;
    ll k;
    while(t--)
    {
        k=1;
        for(i=in;i<=ses;i++)
        {
            aarray[i]=(aarray[i]+barry[k])%c;
            k++;
        }
        in++;
        ses++;
    }
    for(i=1;i<=n;i++)
        cout<<aarray[i]<<" ";


    return 0;
}
