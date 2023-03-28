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
    dl i,j,n,m,t,ans,a,b,c,d;
    ll k,d1,d2;
    cin>>a>>b>>c>>d;
    if(dl(a/b)==dl(c/d))
    {
        cout<<"0/1"<<endl;
        return 0;
    }
    if(dl(a/b)<dl(c/d))
    {
         d1=((b*c)-(a*d));
         d2=(b*c);
        k=__gcd(d1,d2);
        d1/=k;
        d2/=k;
    }
    else if(dl(a/b)>dl(c/d))
    {
        d1=(a*d)-(b*c);
        d2=a*d;
        k=__gcd(d1,d2);
        d1/=k;
        d2/=k;
    }
    cout<<d1<<'/'<<d2<<endl;

    return 0;
}



