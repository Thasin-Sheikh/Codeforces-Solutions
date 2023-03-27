/***By the name of Allah***/
///**Author Thasin Sheikh**///
#include<bits/stdc++.h>
using namespace std;
long long int po[1005][10];
vector<int>primes;
#define MAX 35000
#define makefast__  ios_base::sync_with_stdio(false);
using ll=long long int  ;
using dl =double;
int main()
{
    makefast__
    string str;
    ll i,j,m,a,b,c,d,n,l,t,s,x,p=0,cnt=1,mn;
    cin>>a>>b>>c>>d;
    if(a+b>c&&a+c>b&&b+c>a)
    {
        cout<<"TRIANGLE"<<endl;
        return 0;

    }
     if(a+d>c&&a+c>d&&c+d>a)
    {
        cout<<"TRIANGLE"<<endl;
        return 0;

    }
     if(b+c>d&&d+c>b&&d+b>c)
    {
        cout<<"TRIANGLE"<<endl;
        return 0;

    }
     if(b+a>d&&b+d>a&&d+a>b)
    {
        cout<<"TRIANGLE"<<endl;
        return 0;

    }

     if(a+b==c||a+c==b||b+c==a||a+b==d||a+c==d||a+d==b||a+d==c||b+c==d||b+d==a||b+d==c||c+d==a||c+d==b)
    {
        cout<<"SEGMENT"<<endl;
        return 0;

    }
    cout<<"IMPOSSIBLE"<<endl;


}
