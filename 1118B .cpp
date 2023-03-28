
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
    cin>>n;
    ll jor=0,bejor=0;
    for(i=1; i<=n; i++)
    {
        cin>>aarray[i];
        if(i%2==0)
            jor+=aarray[i];
        else bejor+=aarray[i];
    }
    //cout<<jor<<" "<<bejor<<endl;
    ll jflag=0,bflag=0,count=0;
    for(i=1; i<=n; i++)
    {
        if(i%2!=0)
        {
            x=bejor-aarray[i];
            x-=bflag;
            ll z=x+jflag;
            k=jor-jflag;
            k+=bflag;
            if(z==k)
            {
                count++;
            }
            bflag+=aarray[i];
        }
        else
        {
            x=jor-aarray[i];
            x-=jflag;
            ll z=x+bflag;
            k=bejor-bflag;
            k+=jflag;
            if(k==z)
            {
                count++;
            }
            jflag+=aarray[i];
        }
    }
    cout<<count<<endl;
    return 0;
}
