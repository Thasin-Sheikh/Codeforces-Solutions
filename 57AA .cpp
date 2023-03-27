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
bool ok[1000001];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,x1,x2,y1,y2,n,m,k,t;
    cin>>n;
    cin>>x1>>y1>>x2>>y2;
    if(y1==0&&y2==0)
    {
        cout<<abs(x1-x2)<<endl;
        return 0;
    }
    if(y1==n&&y2==n)
    {
        cout<<abs(x1-x2)<<endl;
        return 0;
    }
    if(x1==0&&x2==0)
    {
        cout<<abs(y1-y2)<<endl;
        return 0;
    }
    if(x1==n&&x2==n)
    {
        cout<<abs(y1-y2)<<endl;
        return 0;
    }
    ll p1,p2,p3;
    if(y1==0)
    {
        if(x2==0)
        {
            cout<<y2+x1<<endl;
            return 0;
        }
        if(x2==n)
        {
            cout<<y2+(n-x1)<<endl;
            return 0;
        }
        if(y2==n)
        {
            p1=x1+n+x2;
            p2=n-x1+n+n-x2;
            cout<<min(p1,p2)<<endl;
            return 0;

        }
    }
    if(y2==0)
    {
        if(x1==0)
        {
            cout<<y1+x2<<endl;
            return 0;
        }
        if(x1==n)
        {
            cout<<y1+(n-x2)<<endl;
            return 0;
        }
        if(y1==n)
        {
            p1=x1+n+x2;
            p2=(n-x1)+n+(n-x2);
            cout<<min(p1,p2)<<endl;
            return 0;
        }
    }
    if(y1==n)
    {
        if(x2==0)
        {
            p1=x1+(n-y2);
            cout<<p1<<endl;
            return 0;
        }
        if(x2==n)
        {
            ll p=(n-x1)+(n-y2);
            cout<<p<<endl;
            return 0;
        }
    }
    if(y2==n)
    {
        if(x1==0)
        {
            p1=x2+(n-y1);
            cout<<p1<<endl;
            return 0;
        }
        if(x1==n)
        {
            p1=(n-x2)+(n-y1);
            cout<<p1<<endl;
            return 0;
        }
    }
    if((x1==0&&y1<n)&&(x2==n&&y2<n))
    {
        p1=(n-y1)+n+(n-y2);
        p2=y1+n+y2;
        cout<<min(p1,p2)<<endl;
        return 0;
    }
    if((x2==0&&y2<n)&&(x1==n&&y1<n))
    {
        p1=(n-y2)+n+(n-y1);
        p2=y2+n+y1;
        cout<<min(p1,p2)<<endl;
        return 0;
    }
}



