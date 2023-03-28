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
ll res[200000+10];
ll dri[200000+10];
ll ldis[200000+100];
ll rdis[200000+100];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll a,b,c,d,e,f,x,y,k,t,q,p,A=0,mod,B=0,L,j,i,l,r,m,n,C=0,ans=0,sum=0,sum1=0;
    vector<ll>v,v1;
    queue<ll>qu;
    cin>>n>>m;
    for(i=1; i<=n+m; i++)
    {
        cin>>res[i];
        aarray[i]=0;
    }
    ldis[0]=INT_MAX;
    rdis[n+m+1]=INT_MAX;
    for(i=1; i<=n+m; i++)
    {
        cin>>dri[i];
        if(dri[i]==1)
            ldis[i]=i;
        else ldis[i]=ldis[i-1];
    }
    for(i=n+m; i>=1; i--)
    {
        if(dri[i]==1)
        {
            rdis[i]=i;
        }
        else
            rdis[i]=rdis[i+1];
    }
    for(i=1; i<=n+m; i++)
    {
        if(dri[i]==0)
        {
            x=ldis[i];
            y=rdis[i];
            if(x==INT_MAX)
            {
                aarray[y]++;
            }
            else if(y==INT_MAX)
            {
                aarray[x]++;
            }
            else
            {
                a=res[i];
                b=res[x];
                c=res[y];
                k=a-b;
                r=c-a;
                if(k<=r)
                {
                    aarray[x]++;
                }
                else aarray[y]++;
            }
        }
    }
    for(i=1;i<=n+m;i++)
    {
        if(dri[i]==1)
        {
            cout<<aarray[i]<<" ";
        }
    }


    return 0;
}


