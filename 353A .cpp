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
    ll a,b[100000+10],n,i,j;
    cin>>n;
    ll ups=0,lows=0;
    for(i=1; i<=n; i++)
    {
        cin>>aarray[i]>>b[i];
        ups+=aarray[i];
        lows+=b[i];
    }
    if(ups%2==0&&lows%2==0)
    {
        cout<<0<<endl;
        return 0 ;
    }
    ll c=0;
    //cout<<ups<<" "<<lows<<endl;
    for(i=1;i<=n;i++)
    {
        if(aarray[i]%2||b[i]%2)
        {
            ups-=aarray[i];
            lows+=aarray[i];
            lows-=b[i];
            ups+=b[i];
        }
        if(lows%2==0&&ups%2==0)
        {
            cout<<1<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;



    return 0;
}


