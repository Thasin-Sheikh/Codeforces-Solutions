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
    ll i,j,n,m,x,y,k,t;
    cin>>x>>y;
    ll c=1;
    while(1)
    {
        if(c%2)
        {
            if(x>=2&&y>=2)
            {
                x-=2;
                y-=2;
            }
            else if(x==1&&y>=12)
            {
                x-=1;
                y-=12;
            }
            else if(y>=22)
            {
                y-=22;
            }
            else
            {
                cout<<"Hanako"<<endl;
                return 0;
            }
            c++;
        }
        else
        {
            if(y>=22)
            {
                y-=22;
            }
            else if(y>=12&&x)
            {
                x-=1;
                y-=12;
            }
            else if(y>=2&&x>=2)
            {
                y-=2;
                x-=2;
            }
            else
            {
                cout<<"Ciel"<<endl;
                return 0;
            }
            c++;
        }

    }

    return 0;
}


