
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
bool prime[1000001];
int main()
{
    makefast__
    string str;
    ll a,b,c,d,e,f,x,y,k,t,A=0,B=0,L,j,i,l,r,m,n,C=0,ans=0,sum=0,sum1=0;
    vector<ll>v,v1;
    queue<ll>qu;
    cin>>a>>b;
    if(a==9&&b==1)
    {
        cout<<9<<" "<<10<<endl;
        return 0;
    }
    if(a==0&&b==1)
    {
        cout<<0<<" "<<1<<endl;
        return 0;
    }
    if(a==b)
    {
        cout<<a<<1<<" "<<b<<2<<endl;
    }
    else if(b-a==1)
    {
        cout<<a<<" "<<b<<endl;
    }
    else
        cout<<-1<<endl;


    return 0;
}
