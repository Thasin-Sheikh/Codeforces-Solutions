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
    string str,ptr,ans;
    ll a,c,d,e,k,x,y,t,m,b,A,B=1,L,j,i,l,r,n,C=1,sum=1,sum1=0;
    vector<ll>v,v1;
    queue<ll>qu;
    stack<ll>st;
    set<ll>sl;
    cin>>n>>m;
   if(m-n>=10)
   {
       cout<<0<<endl;
       return 0;
   }
   for(i=n+1;i<=m;i++)
   {
       B=(B*(i%10))%10;
   }
   cout<<B<<endl;
}
