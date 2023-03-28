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
    ll t;
    cin>>t;
    while(t--)
    {
        ll r,i,j,l,n,m,a,b,c;
        cin>>l>>r>>m;ll dif=r-l;
        for(i=l;i<=r;i++)
        {
            ll rm1,rm2;
            rm1=m%i;
            rm2=i-rm1;
            if(i<=m&&rm1<=dif)
            {
                a=i;
                b=r;
                c=r-rm1;
                break;
            }
            else if(rm2<=dif)
            {
                a=i;
                b=r-rm2;
                c=r;
                break;
            }
        }
        cout<<a<<" "<<b<<" "<<c<<endl;
    }

    return 0;
}


