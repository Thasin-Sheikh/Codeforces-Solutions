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
    cin>>n>>m;
    if(n*n<m)
    {
        cout<<-1<<endl;
        return 0;
    }
    for(i=1; i<=n; i++)
    {
        if(m)
        {
            magic[i][i]=1;
            m--;
        }
        for(j=i+1; j<=n; j++)
        {
            if(m>=2)
            {
                magic[i][j]=1;
                magic[j][i]=1;
                m-=2;
            }
        }
    }
    if(m)
    {
        cout<<-1<<endl;
        return 0;
    }
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            cout<<magic[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}


