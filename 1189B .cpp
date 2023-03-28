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
    ll a,c,d,e,k,x,y,t,b,A,B,L,j,i,l,r,n,C,ans=0,sum=0,sum1=0;
    vector<ll>v,v1;
    queue<ll>qu;
    stack<ll>st;
    set<ll>sl;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>aarray[i];


    }
    sort(aarray,aarray+n+1);
    A=aarray[n-1];
    B=aarray[n-2];
    if(A+B<=aarray[n])
    {
        cout<<"NO"<<endl;
        return 0;
    }
    cout<<"YES"<<endl;
    for(i=n; i>=1; i--)
    {
        if(i!=n-2)
            cout<<aarray[i]<<" ";
    }
    cout<<aarray[n-2]<<endl;



}
