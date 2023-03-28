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
    cin>>n>>m;
    if(m<=n)
    {
        cout<<n-m<<endl;
        return 0;
    }
    ll c=0,c1=0,f=INT_MAX,f1=INT_MAX;
    while(m>n)
    {
        if(m%2==0)
        {
            m/=2;
        }
        else m++;
        c++;
    }
    c+=abs(m-n);
    cout<<c<<endl;


    return 0;
}


