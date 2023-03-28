///*Bismillahir Rahmanir Rahim***///
///**Author Thasin Sheikh**///
/***Stay_Home_Stay_Safe***/
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
const int N = 1234567;
ll aarray[N];
ll magic[101][101];
bool prime[1000001];

int main()
{
    makefast__
    string str;
    ll a,c,d,e,f,x,m,y,t,A,B=1,L,j,i,l,r,n,C=0,ans=0,sum=0,sum1=0;
    vector<ll>v,v1;
    queue<ll>qu;
    cin>>m;
    for(i=0;i<m;i++)
    {
        cin>>a;
        aarray[a]++;
    }
    for(i=2;i<N;i++)
    {
        A=0;
        for(j=i;j<=N;j+=i)
        {
            A+=aarray[j];
        }
        B=max(A,B);
    }
    cout<<B<<endl;

  return 0;

}
