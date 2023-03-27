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
ll inc[100000+10],dcs[100000+10];
int main()
{
    makefast__
    string str;
    ll a,b,c,d,e,f,x,y,k,t,A=0,B=0,L,j,i,l,r,m,n,C=0,ans=0,sum=0,sum1=0;
    vector<ll>v,v1;
    queue<ll>qu;
    cin>>n>>m;
    for(i=1; i<=n; i++)
    {
        cin>>aarray[i];
    }
    inc[n]=dcs[n]=0;
    for(i=n-1; i>=1; i--)
    {
        if(aarray[i]<=aarray[i+1])
        {
            inc[i]=inc[i+1]+1;
        }
        else
            inc[i]=0;
        if(aarray[i]>=aarray[i+1])
            dcs[i]=dcs[i+1]+1;
        else
            dcs[i]=0;
    }
    /*for(i=1; i<=n; i++)
        cout<<inc[i]<<" ";
    cout<<endl;
    for(i=1; i<=n; i++)
    {
        cout<<dcs[i]<<" ";
    }*/
    while(m--)
    {
        cin>>a>>b;
        if(b<=a+inc[a]||b<=a+dcs[a]||b<=(a+inc[a])+dcs[a+inc[a]])
        {
            cout<<"Yes"<<endl;
        }
        else cout<<"No"<<endl;
    }

        return 0;
}

