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
    cin>>n;
    if(n%2==0)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    for(i=1; i<=n; i++)
    {
        if(i%2)
        {
            aarray[i]=2*i;
            aarray[i+n]=2*i-1;
        }
        else
        {
            aarray[i]=2*i-1;
            aarray[i+n]=2*i;
        }
    }
    cout<<"YES"<<endl;
    for(i=1; i<=2*n; i++)
        cout<<aarray[i]<<" ";
    cout<<endl;

    return 0;
}


