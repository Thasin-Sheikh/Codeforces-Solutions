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
    ll a,b,c,d,e,f,x1,y1,x,y,k,t,q,p,A=0,mod,B=0,L,j,i,l,r,m,n,C=0,ans=0,sum=0,sum1=0;
    vector<ll>v,v1;
    queue<ll>qu;
    cin>>n>>x1>>y1;
    ll xv[10000],yv[10000];
    for(i=1; i<=n; i++)
    {
        cin>>xv[i]>>yv[i];
    }
    for(i=1; i<=n; i++)
    {
        if(xv[i]!=INT_MIN)
        {
            ll x2=xv[i],y2=yv[i];
            for(j=i+1; j<=n; j++)
            {
                ll x3=xv[j],y3=yv[j];
                if((x2-x1)*(y3-y1)==(x3-x1)*(y2-y1))
                {
                    xv[j]=INT_MIN;
                }
            }
            C++;
            xv[i]=INT_MIN;
        }
    }
    cout<<C<<endl;

    return 0;
}

