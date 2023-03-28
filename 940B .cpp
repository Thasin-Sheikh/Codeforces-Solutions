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
    ll i,j,n,m,A,B,k,t;
    cin>>n>>k;
    cin>>A>>B;
    ll cost=0;
    if(k==1)
    {
        cout<<(n-1)*A<<endl;
        return 0;
    }
    while(n>1)
    {
        if(n%k==0)
        {
            t=n/k;
            t=abs(t-n);
            if(t*A>B)
            {
                cost+=B;
            }
            else
            {
                cost+=A*t;
            }
            n/=k;
        }
        else
        {
            t=n%k;
            n-=t;
            if(n==0)
                t--;
            cost+=(t*A);
        }
    }
    cout<<cost<<endl;

    return 0;
}



