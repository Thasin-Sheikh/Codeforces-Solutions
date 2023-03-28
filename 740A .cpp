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
const int N = 1e5 + 10;
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
    ll i,j,n,m,k,t,a,b,c;
    cin>>n>>a>>b>>c;
    if(n%4==0)
    {
        cout<<0<<endl;
        return 0;
    }
    k=n%4;
    //cout<<k<<endl;
    k=4-k;
    ll p1,p2=INT_MAX,p3=INT_MAX,p4=INT_MAX,p5=INT_MAX,p6=INT_MAX;
    p1=k*a;
    if(k==2)
    {
        p2=b;
    }
    if(k==3)
    {
        p3=c;
        p4=a+b;
    }
    for(i=3;i<=N;i+=3)
    {
        if((n+i)%4==0)
        {
            p5=(i/3)*c;
            break;
        }
    }
    for(i=5;i<=N;i+=5)
    {
        if((n+i)%4==0)
        {
            ll num=i/2;
            num--;
            p6=num*b+c;
            break;

        }
    }
    //cout<<p6<<endl;
    cout<<min(p1,min(p2,min(p4,min(p5,min(p6,p3)))))<<endl;

    return 0;
}


