
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
    ll a,b,c,d,e,f,x,y,t,A=0,B=0,L,j,i,l,r,m,n,C=0,ans=0,sum=0,sum1=0;
    vector<ll>v,v1;
    queue<ll>qu;
    cin>>t;
    while(t--)
    {
        cin>>n>>r;
        f=0;
        for(i=1; i<=n; i++)
            cin>>aarray[i];
        sort(aarray,aarray+n+1);
        ll flag=aarray[n];
        ll cnt=0;
            for(i=n-1; i>=1; i--)
            {
                if(aarray[i]==flag)
                    continue;
                else
                {
                    flag=aarray[i];
                    cnt++;
                }
                if(aarray[i]-r*cnt<=0)
                {
                    f=1;
                    break;
                }
                //cout<<cnt<<endl;
            }
            if(f==0)
                cnt++;
        cout<<cnt<<endl;
    }
    return 0;
}
