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
    ll i,j,n,m,k,t;
    cin>>n>>k;
    memset(prime,true,sizeof(prime));
    vector<ll>ans;
    ll f,l;
    f=1,l=n;
    for(i=0; i<k; i++)
    {
        if((i&1)==0)
        {
            cout<<f<<" ";
            f++;
        }
        else
        {
            cout<<l<<" ";
            l--;
        }

    }
    for(i=k; i<n; i++)
    {
        if((k&1))
        {
            cout<<f<<" ";
            f++;
        }
        else
        {
            cout<<l<<" ";
            l--;
        }
    }
    cout<<endl;

    return 0;
}


