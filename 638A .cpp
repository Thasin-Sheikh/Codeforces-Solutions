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
    ll i,j,n,m,k,t,a;
    vector<ll>jor,bjor;
    cin>>n>>a;
    for(i=1; i<=n; i++)
    {
        if(i%2)
            bjor.push_back(i);
    }
    for(i=n; i>=1; i--)
    {
        if(i%2==0)
            jor.push_back(i);
    }
    if(a%2)
    {
        ll c=0;
        for(i=0; i<bjor.size(); i++)
        {
            if(bjor[i]==a)
                break;
            else c++;
        }
        cout<<c+1<<endl;
        return 0;
    }
    else
    {
        ll c=0;
        for(i=0; i<jor.size(); i++)
        {
            if(jor[i]==a)
                break;
            else c++;
        }
        cout<<c+1<<endl;
        return 0;

    }
    return 0;
}

