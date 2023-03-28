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
ll aarray[200000+10];
ll magic[101][101];
vector<ll>primes;
bool ok[1000001];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,k,t;
    ll ho=0,ver=0;
    cin>>str;
    for(i=0;i<str.length();i++)
    {
        if(str[i]=='0')
        {
            ver++;
            if(ver==1)
            {
                cout<<3<<" "<<1<<endl;
            }
            else
            {
                cout<<1<<" "<<1<<endl;
                ver=0;
            }
        }
        else
        {
            ho++;
            if(ho==1)
            {
                cout<<1<<" "<<3<<endl;
            }
            else
            {
                cout<<1<<" "<<1<<endl;
                ho=0;
            }
        }
    }

    return 0;
}


