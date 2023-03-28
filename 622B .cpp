///*Bismillahir Rahmanir Rahim***///
///**Author Thasin Sheikh**///
#include<bits/stdc++.h>
#include<math.h>
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
    string ptr,str,uni;
    ll n,i,j,p=0,m,after;
    vector<ll>cv;
    char ch;
    cin>>n;
    cin>>ch;
    cin>>m;
    cin>>after;
    p=m+after;
    if(p>=60)
    {
        n=n+(p/60);
        p=p%60;

    }
    n=n%24;
    if(n<=9)
    {
        cout<<0<<n<<":";
    }
    else cout<<n<<":";
    if(p<=9)
    {
        cout<<0<<p<<endl;
    }
    else cout<<p<<endl;


}
