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
    ll i,j,n,m,k,t,x,ra,rb,a,b;
    cin>>x>>t>>a>>b>>ra>>rb;
    if(a+b<x)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    if(x==0)
    {
        cout<<"YES"<<endl;
        return 0;
    }
    for(i=0;i<t;i++)
    {
        k=a-i*ra;
        if(k==x)
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    for(i=0;i<t;i++)
    {
        k=b-i*rb;
        if(k==x)
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }

    for(i=0;i<t;i++)
    {
        k=a-(i*ra);
        for(j=0;j<t;j++)
        {
            m=b-(j*rb);
            if(k+m==x)
            {
                cout<<"YES"<<endl;
                return 0;
            }
        }
    }
    cout<<"NO"<<endl;

    return 0;
}


