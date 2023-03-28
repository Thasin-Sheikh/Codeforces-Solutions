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
    ll n,i,j,p=0,m;
    vector<ll>cv;
    cin>>n;
    j=n;
    while(n>0)
    {
        m=n%10;
        n/=10;
        cv.push_back(m);
        p++;
    }
    ll next=cv[cv.size()-1]+1;
    //cout<<next<<endl;
    ll an,pro=1;
    for(i=1; i<=p-1; i++)
    {
        pro=pro*10;
    }
   an=next*pro;
   cout<<an-j<<endl;

}
