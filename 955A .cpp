///*Bismillahir Rahmanir Rahim***///
/***Stay_Home_Stay_Safe***/
///**Author Thasin Sheikh**///
#include<bits/stdc++.h>
using namespace std;
#define MAX 1e6+10
#define MOD 1000000007
#define PI acos(-1)
#define R 510
#define makefast__  ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using ll=long long int  ;
using dl =double;
using ull=unsigned long long;
const long N = 3e5 + 10;
ll aarray[N];
ll magic[R][R];
vector<ll>primes;
bool check[1000001];
ll vis[N];
map<ll,ll>mp;
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,t,h,d,c,nn;
    dl k;
    cin>>n>>m;
    cin>>h>>d>>c>>nn;
    k=(h/nn);
    if(h%nn)
        k++;
    k*=c;
    if(n>=20)
    {
        dl op=k/100;
        k-=op*20;
        cout<<k<<endl;
        return 0;
    }
    if(n<20)
    {
        t=20-n;
        if(m>0)
        {
            t--;
            t*=60;
            t+=(60-m);
        }
        else
            t*=60;
        t*=d;
        t+=h;
        dl oo=t/nn;
        if(t%nn)
            oo++;
        dl bn=oo*c;
        dl  v=bn/100;
        bn-=v*20;
        if(k<bn)
        {
            cout<<setprecision(20)<<k<<endl;
        }
        else cout<<setprecision(20)<<bn<<endl;
    }
    else cout<<setprecision(20)<<k<<endl;
    return 0;
}




