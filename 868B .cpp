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
ll hand[100];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //tle khaite chas to endl use kor
    makefast__
    string str;
    ll i,j,n,m,k,t,h,s,t1,t2,a,b,c,d;
    cin>>h>>m>>s>>t1>>t2;
    ll gm1,gm2,gs1,gs2;
    a=min(t1,t2);
    b=max(t1,t2);
    gm1=a*5;
    gm2=b*5;
    gs1=gm1,gs2=gm2;
    ll fh=0,fm=0,fs=0,sum=0;
    for(i=a;i<b;i++)
    {
        for(j=gm1;j<gm2;j++)
        {
            for(k=gs1;k<gs2;k++)
            {
                if(i==h&&fh==0)
                {
                    sum++;
                    fh++;
                }
                if(j==m&&fm==0)
                {
                    fm++;
                    sum++;
                }
                if(k==s&&fs==0)
                {
                    fs++;
                    sum++;
                }

            }
        }
    }
    if(sum==0||sum==3)
    {
        cout<<"YES"<<"\n";
    }
    else cout<<"NO"<<"\n";
    return 0;
}




