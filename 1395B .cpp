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
bool prime[100001];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,k,t,x,y;
    cin>>n>>m;
    cin>>x>>y;
    cout<<x<<" "s<<y<<endl;
    for(i=1; i<=m; i++)
    {
        if(i!=y)
            cout<<x<<" "<<i<<endl;
    }
    ll a,b;
    ll count=1;
    a=x-1;
    //cout<<i<<endl;
    k=x-1;
    while(k--)
    {
        if(i==m+1&&a>=1)
        {
            for(i=m; i>=1; i--)
            {
                cout<<a<<" "<<i<<endl;
            }
        }
        else
        {
            a--;
            for(i=1; i<=m; i++)
            {
                cout<<a<<" "<<i<<endl;
            }
            a--;
        }
    }
    k=n-x;
    a=x+1;
    //cout<<a<<endl;
    //cout<<i<<endl;
    while(k--)
    {
        if(i==0&&a<=n)
        {
            for(i=1;i<=m;i++)
            {
                cout<<a<<" "<<i<<endl;
            }
        }
        else if(a<=n)
        {
            for(i=m;i>=1;i--)
            {
                cout<<a<<" "<<i<<endl;
            }
        }
        a++;
    }



    return 0;
}


