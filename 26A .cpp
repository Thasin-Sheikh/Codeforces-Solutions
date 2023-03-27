/***By the name of Allah***/
///**Author Thasin Sheikh**///
#include<bits/stdc++.h>
using namespace std;
long long int po[1005][10];
vector<int>primes;
#define MAX 35000
#define makefast__  ios_base::sync_with_stdio(false);
using ll=long long int  ;
using dl =double;
/*int primes(ll n)
{
    bool prime[100007];
    memset(prime,true,sizeof(prime));
    prime[0]=prime[1]=false;
    for(i=2;i<=10000;i++)
    {
        if(prime[2])
        {
            for(j=2;i*j<=100001;j++)
                prime[i*j]=false;
        }
    }
}*/
int main()
{
    makefast__
    string str;
    ll i,j,m,a,b,c,d,n,l,t,s,x,p=0,cnt=0,mn;
    bool prime[100007];
    //set<ll>sl;
    memset(prime,true,sizeof(prime));
    prime[0]=prime[1]=false;
    for(i=2; i<=10000; i++)
    {
        if(prime[i])
        {
            for(j=2; i*j<=100001; j++)
                prime[i*j]=false;
        }
    }
    cin>>n;
    for(i=1; i<=n; i++)
    {
        set<ll>sl;
        //cout<<i<<endl;
        for(j=1; j*j<=i; j++)
        {
            if((i%j==0))
            {
                if(prime[j])
                {
                    sl.insert(j);
                }
                if(j!=i/j&&prime[i/j])
                {
                    sl.insert(i/j);
                }
            }

        }
        if(sl.size()==2)
        {
            //cout<<i<<endl;
            p++;
            //cout<<sl.size()<<endl;

        }
    }
    cout<<p<<endl;



}
