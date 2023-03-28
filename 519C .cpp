///*Bismillahir Rahmanir Rahim***///
/***Stay_Home_Stay_Safe***/
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
    string str;
    ll a,b,c,d,e,f,x,y,t,A,B,L,j,i,l,r,m,n,C=0,ans=0,sum=0,sum1=0;
    vector<ll>v,v1;
    queue<ll>qu;
    cin>>a>>b;
    if(a*2<=b||b*2<=a)
    {
        cout<<min(a,b)<<endl;
        return 0;
    }

   while(a>0&&b>0&&a+b>=3)
   {
       ans++;
       if(a>b)
       {
           a-=2;
           b-=1;
       }
       else
       {
           a-=1;
           b-=2;
       }
   }
   cout<<ans<<endl;

    return 0;
}
