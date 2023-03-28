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
using ull=unsigned long long;
const int N = 2e5 + 10;
ll aarray[N];
ll magic[505][505];
vector<ll>primes;
bool ok[1000001];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,k,t,a,b,c,d,x,y,w,z,ans=0;
    cin>>n>>a>>b>>c>>d;
    for(i=1;i<=n;i++)
    {
        x=i;
        y=x+b-c;
        z=x+a-d;
        w=z+b-c;
        if(y>=1&&y<=n&&z>=1&&z<=n&&w>=1&&w<=n)
        {
            ans++;
        }
    }
    cout<<ans*n<<endl;

    return 0;
}



