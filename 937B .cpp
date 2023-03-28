///*Bismillahir Rahmanir Rahim***///
/***Stay_Home_Stay_Safe***/
///**Author Thasin Sheikh**///
#include<bits/stdc++.h>
using namespace std;
#define MAX 1e6+10
#define MOD 1000000007
#define PI 3.14159265359
#define makefast__  ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
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
    ll i,j,n,m,p,y,k,t;
    cin>>p>>y;
    while(y>p)
    {
        if(y%2==0)
        {
            y--;
        }
        if(p==y)
        {
            cout<<-1<<endl;
            return 0;
        }
        ll f=1;
        for(i=2;i*i<=y;i++)
        {
            if(y%i==0)
            {
                if(i<=p)
                {
                    f=0;
                    break;
                }
            }
        }
        if(f)
        {
            cout<<y<<endl;
            return 0;
        }
        y-=2;
    }
    cout<<-1<<endl;
    return 0;
}



