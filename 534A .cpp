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
    ll a,c,d,e,f,x,y,t,A=0,B=0,L,j,v,i,l,r,n,C=0,ans=0,sum=0,sum1=0;
    vector<ll>v1;
    cin>>n;
    if(n==2)
    {
        cout<<1<<endl;
        cout<<1<<endl;
        return 0;
    }
    if(n==3)
    {
        cout<<2<<endl;
        cout<<1<<" "<<3<<endl;
        return 0;
    }
    if(n==4)
    {
        cout<<4<<endl;
        cout<<2<<" "<<4<<" "<<1<<" "<<3<<endl;
        return 0;
    }
    cout<<n<<endl;
    for(i=1;i<=n;i+=2)
    {
        v1.push_back(i);
    }
    for(i=2;i<=n;i+=2)
    {
        v1.push_back(i);
    }
    for(i=0;i<v1.size();i++)
        cout<<v1[i]<<" ";




}
