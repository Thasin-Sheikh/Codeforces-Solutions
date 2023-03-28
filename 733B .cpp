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
    string str;
    ll a[100000+10],c,d,e,x,y,t,b[100000+10],A,B,L,j,i,l,r,n,C,ans=0,sum=0,sum1=0;
    vector<ll>v,v1;
    queue<ll>qu;
    cin>>n;
    ll left=0,right=0;
    for(i=1; i<=n; i++)
    {
        cin>>a[i]>>b[i];
        left+=a[i];
        right+=b[i];
    }
    y=abs(left-right);
    for(i=1; i<=n; i++)
    {
        B=left-a[i];
        B+=b[i];
        A=right-b[i];
        A+=a[i];
        L=abs(A-B);
        if(L>y)
        {
            y=L;
            ans=i;
        }
    }
    cout<<ans<<endl;

    return 0;
}
