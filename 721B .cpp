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
bool waysort( string n,string  m)
{
    return n.length()<m.length();
}
int main()
{
    makefast__
    string wright,ptr;
    ll a,c,d,e,f,x,y,t,A=0,B,L,j,v,k,i,l,r,n,C=0,ans=0,sum=0,sum1=0;
    vector<ll>v1;
    cin>>n;
    cin>>k;
    vector<string>str;
    for(i=0; i<n; i++)
    {
        cin>>ptr;
        str.push_back(ptr);
    }
    cin>>wright;
    sort(str.begin(),str.end(),waysort);
    L=wright.length();
    for(i=0; i<str.size(); i++)
    {
        if(str[i].length()<L)
        {
            continue;
        }
        else
        {
            A=i+1;
            break;
        }
    }
    B=n;
    for(i=0; i<str.size(); i++)
    {
        if(str[i].length()>L)
        {
            B=i;
            break;
        }
    }
    C=0;
    ll  D=0;
    C=A/k;
    if(A%k==0)
        C--;
    D=B/k;
    if(B%k==0)
        D--;
    cout<<A+(C*5)<<" "<<B+(D*5)<<endl;




}
