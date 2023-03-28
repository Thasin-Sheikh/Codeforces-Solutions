///*Bismillahir Rahmanir Rahim***///
///**Author Thasin Sheikh**///
/*while(a)
    {
        if(a%2==0)
            dvi.push_back(0);
        else
            dvi.push_back(1);
        a/=2;
    }
    reverse(dvi.begin(),dvi.end());*/
#include<bits/stdc++.h>
using namespace std;
#define MAX 35000
#define makefast__  ios_base::sync_with_stdio(false);
using ll=long long int  ;
using dl =double;
const int N = 2e5 + 10;
ll aarray[200000+10];
ll magic[101][101];
vector<ll>primes;
bool fk[1000001];

int main()
{
    makefast__
    ll a,c=0,d,e,f,t,A,B,L,v,l,r,C=0,ans=0,sum=0,sum1=0;
    vector<ll>v1;
    ll i,j,n,m;
    ll a1,a2;
    ll g,b;
    cin>>t;
    while(t--)
    {
        cin>>L>>v>>l>>r;
        A=L/v;
        B=r/v;
        C=l/v;
        f=B-C;
        if(l%v==0)
            f++;
        cout<<A-f<<endl;


    }


return 0;
}


