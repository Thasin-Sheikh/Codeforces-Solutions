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
int main()
{
    makefast__
    string str;
    ll a,b,c,d,e,f,x,y,k,t,A=0,B=0,L,j,i,l,r,m,n,C=0,ans,sum=0,sum1=0;
    vector<ll>v,v1;
    queue<ll>qu;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        ans=0;
        if(a>0)
        {
            ans++;
            a--;
        }
        if(b>0)
        {
            b--;
            ans++;
        }
        if(c>0)
        {
            c--;
            ans++;
        }
        ll a1,a2,a3;
        a1=max(a,max(b,c));
        a2=min(a,min(b,c));
        a3=(a+b+c)-(a1+a2);
        //cout<<a1<<" "<<a2<<" "<<a3<<endl;
        if(a1>0&&a3>0)
        {
            a1--;
            a3--;
            ans++;
        }
        if(a1>0&&a2>0)
        {
            a1--;
            a2--;
            ans++;
        }
        if(a2>0&&a3>0)
        {
            a2--;
            a3--;
            ans++;
        }
        if(a1>0&&a2>0&&a3>0)
        {
            ans++;
        }
        cout<<ans<<endl;

    }

    return 0;
}


