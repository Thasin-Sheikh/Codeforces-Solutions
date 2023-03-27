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
const dl eps=1e-18;
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
    dl a,b,c,d,e,f,x,y,k,t,q,p,A=0,mod,B=0,L,j,i,l,r,m,n,C=0,ans=0,sum=0,sum1=0;
    vector<ll>v,v1;
    queue<ll>qu;
    dl vp,vd;
    cin>>vp>>vd>>t>>f>>c;
    x=0;
    y=0;
    x=vp*t;
    if(vp>=vd)
    {
        cout<<0<<endl;
        return 0;
    }
    while(x<c)
    {
        dl tmp=1.*x/(vd-vp);
        x+=tmp*vp;
        if(x+eps>c)
            break;
        A++;
        x+=(f+1.*x/vd)*vp;
    }
    cout<<A<<endl;
}
