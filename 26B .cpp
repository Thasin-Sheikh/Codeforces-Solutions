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
    ll i,j,n,m,k,t;
    cin>>str;
    ll ans=0,c=0;
    for(i=0; i<str.length(); i++)
    {
        if(str[i]=='(')
            c++;
        else c--;
        if(c<0)
        {
            ans++;
            c=0;
        }

    }
    ans+=(abs(c));
    cout<<str.length()-ans<<endl;

    return 0;
}



