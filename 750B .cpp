///*Bismillahir Rahmanir Rahim***///
/***Stay_Home_Stay_Safe***/
///**Author Thasin Sheikh**///
#include<bits/stdc++.h>
using namespace std;
//#define MAX 1e6+10
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
    ll i,j,n,m,k=0,t,s=0;
    cin>>n;
    ll sum=0;
    ll f=0;
    const ll MAX=20000;
    for(i=1; i<=n; i++)
    {
        cin>>m>>str;
        if(str[0]=='W'||str[0]=='E')
        {
            if(f==0||f==MAX)
            {
                cout<<"NO"<<endl;
                return 0;
            }
        }
        if(str[0]=='S')
        {
            f+=m;
            if(f>MAX)
            {
                cout<<"NO"<<endl;
                return 0;
            }
        }
        if(str[0]=='N')
        {
            f-=m;
            if(f<0)
            {
                cout<<"NO"<<endl;
                return 0;
            }
        }
    }
    if(f==0)
    {
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;


    return 0;
}


