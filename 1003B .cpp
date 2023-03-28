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
    ll a,b,x,n,m,i;
    cin>>a>>b>>x;
    if(x%2==0)
    {
        if(a>b)
        {
            for(i=0; i<x/2; i++)
                cout<<"01";
            b-=x/2;
            while(b)
            {
                cout<<1;
                b--;
            }
            a-=x/2;
            while(a)
            {
                cout<<0;
                a--;
            }
        }
        else
        {
            for(i=0; i<x/2; i++)
                cout<<"10";
            a-=x/2;
            while(a--)
            {
                cout<<0;
            }
            b-=x/2;
            while(b--)
            {
                cout<<1;
            }

        }
    }
    else
    {
        if(a>b)
        {
            for(i=0; i<x/2; i++)
                cout<<"01";
            a-=x/2;
            while(a)
            {
                cout<<0;
                a--;
            }
            b-=x/2;
            while(b)
            {
                cout<<1;
                b--;
            }
        }
        else
        {
            for(i=0; i<x/2; i++)
                cout<<"10";
            b-=x/2;
            while(b)
            {
                cout<<1;
                b--;
            }
            a-=x/2;
            while(a)
            {
                cout<<0;
                a--;
            }

        }
    }


    cout<<endl;


    return 0;
}


