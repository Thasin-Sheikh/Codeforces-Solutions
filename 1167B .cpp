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
ll dhur[]= {4,8,15,16,23,42};
ll f2(ll n,ll m)
{
    ll i,j;
    for(i=0; i<6; i++)
    {
        if(dhur[i]*n==m&&dhur[i]!=n)
        {
            return true;
        }
    }
    return false;
}
ll f1(ll n,ll m)
{
    ll i,j;
    for(i=0; i<6; i++)
    {
        for(j=i+1; j<6; j++)
        {
            if(dhur[i]*dhur[j]==n)
            {
                if(f2(dhur[i],m))
                {
                    return dhur[i];
                }
                else if(f2(dhur[j],m))
                {
                    return dhur[j];
                }
            }
        }
    }
}
ll val(ll mid,ll pro)
{
    ll i,j;
    for(i=0; i<6; i++)
    {
        if(mid*dhur[i]==pro&&mid!=dhur[i])
            return dhur[i];
    }
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,k,t,a,b,c,d,e,f,g,h,l;
    cout<<'?'<<" "<<1<<" "<<2<<endl;
    fflush(stdout);
    cin>>n;
    cout<<'?'<<" "<<2<<" "<<3<<endl;
    fflush(stdout);
    cin>>m;
    ll mid=f1(n,m);
    aarray[2]=mid;
    aarray[1]=val(mid,n);
    aarray[3]=val(mid,m);
    cout<<'?'<<" "<<4<<" "<<5<<endl;
    fflush(stdout);
    cin>>n;
    cout<<'?'<<" "<<5<<" "<<6<<endl;
    fflush(stdout);
    cin>>m;
    mid=f1(n,m);
    aarray[5]=mid;
    aarray[4]=val(mid,n);
    aarray[6]=val(mid,m);
    cout<<'!'<<" ";
    for(i=1;i<=6;i++)
    {
        cout<<aarray[i]<<" ";
        fflush(stdout);
    }
    cout<<endl;
    fflush(stdout);


}


