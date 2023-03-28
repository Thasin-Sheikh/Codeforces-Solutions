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
ll aarray[500000+10];
ll magic[101][101];
vector<pair<ll,ll>>ans;
ll first;
vector<ll>primes;
vector<bool>prime;
void  seive(ll n)
{
    ll i,j;
    prime.assign(n+1,true);
    primes.assign(n+1,0);
    prime[0]=prime[1]=false;
    for(i=2; i<=n; i++)
    {
        if(prime[i])
        {
            primes[i]=i;
            for(j=i*i; j<=n; j+=i)
                if(prime[j])
                {
                    prime[j]=false;
                    primes[j]=i;
                }
        }

    }
}
void  theory()
    {
        ll i,j,l,a;
        ll n;
        cin>>n;
        for(j=0; j<n; j++)
        {
            cin>>a;
            ll num,d1=1,d2,d3,p1;
            num=a;
            p1=primes[a];

            //cout<<p1<<endl;
            while(a%p1==0)
            {
                a/=p1;
                d1=d1*p1;
            }
            // cout<<d1<<endl;
            d2=num/d1;
            if(d1>1&&d2>1&&(__gcd(d1,d2)==1))
                ans.push_back(make_pair(d1,d2));
            else ans.push_back(make_pair(-1,-1));

        }

    }
    int main()
    {
        makefast__
        string str;
        ll a,b,c,d,e,f,x,y,k,t,A=0,B=0,L,j,i,l,r,m,n,C=0,sum=0,sum1=0;
        seive(1e7+10);
        theory();
        for(auto it=ans.begin(); it!=ans.end(); it++)
            cout<<it->first<<" ";
        cout<<endl;
        for(auto it=ans.begin(); it!=ans.end(); it++)
            cout<<it->second<<" ";
        cout<<endl;
        return 0;
    }
