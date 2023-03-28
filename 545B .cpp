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
    ll a,c,d,e,k,x,y,t,b,A=0,B=0,L,j,i,l,r,n,C,sum=1,sum1=0;
    vector<ll>v,v1;
    queue<ll>qu;
    stack<ll>st;
    set<ll>sl;
    cin>>str>>ptr;
    for(i=0; i<str.length(); i++)
    {
        if(str[i]!=ptr[i]&&sum%2!=0)
        {
            ans+=str[i];
            sum++;
        }
        else if(str[i]!=ptr[i]&&sum%2==0)
        {
            ans+=ptr[i];
            sum++;
        }
        else
            ans+=ptr[i];
    }
    for(i=0;i<str.length();i++)
    {
        if(ans[i]!=str[i])
            A++;
        if(ans[i]!=ptr[i])
            B++;
    }
    if(A!=B)
    {
        cout<<"impossible"<<endl;
    }
    else cout<<ans<<endl;



}
