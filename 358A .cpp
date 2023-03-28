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
    ll i,j,n,m=0,k,t;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>aarray[i];
    }
    for(i=1;i<n;i++)
    {
        ll f=0,f1=0;
        ll x=min(aarray[i],aarray[i+1]);
        ll y=max(aarray[i],aarray[i+1]);
        for(j=i+2;j<=n;j++)
        {
            if(aarray[j]<x||aarray[j]>y)
            {
                f=1;
            }
            else
            {
                f1=1;
            }
            if(f&&f1)
            {
                cout<<"yes"<<endl;
                return 0;
            }
        }
    }

    cout<<"no"<<endl;

    return 0;
}


