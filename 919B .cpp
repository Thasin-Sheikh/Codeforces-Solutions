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
ll  solve(ll h)
{
    return h*(3*h+1)/2;
}
int main()
{
    makefast__
    long long int n,t,i,cnt,d,flag=0,j=0,money,days,a,ar[100000+100],p[100000];
    vector<ll>s,vec;
    ll a1,a2;
    vec.push_back(19);
    for(i=20; i<=20000000; i++)
    {
        t=i;
        ll sum=0;
        while(t)
        {
            d=t%10;
            t/=10;
            sum+=d;
        }
        if(sum==10)
            vec.push_back(i);
    }
    cin>>n;
    cout<<vec[n-1]<<endl;
}
