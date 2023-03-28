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
    ll i,j,n,m,k,c=0,t,x,y;
    cin>>n>>x>>y;
    for(i=1; i<=n; i++)
    {
        cin>>aarray[i];
        if(aarray[i]<=x)
            c++;
    }
    sort(aarray,aarray+n+1);
    if(x>y)
    {
        cout<<n<<endl;
        return 0;
    }
    cout<<ceil(c/2.0)<<endl;


    return 0;
}


