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
    ll a,c=0,d,e,f,t,A,B=0,L,j,v,i,l,r,n,C=0,ans=0,sum=0,sum1=0;
    vector<ll>v1;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>aarray[i];

    }
    A=aarray[n];
    v1.push_back(0);
    for(i=n-1; i>=1; i--)
    {
        if(aarray[i]<A)
        {
            L=A+1-aarray[i];
            v1.push_back(L);
        }
        else if(aarray[i]==A)
        {
            v1.push_back(1);

        }
        else

        {
            v1.push_back(0);
            A=aarray[i];
        }
    }

    reverse(v1.begin(),v1.end());
    for(i=0; i<v1.size(); i++)
        cout<<v1[i]<<" ";
    return 0;

}