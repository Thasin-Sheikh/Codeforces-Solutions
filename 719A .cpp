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
    ll n,t,i,cnt,d,flag,j=0,money,days,a,ar[100000+100],p[100000];
    vector<ll>s,vec;
    ll a1,a2;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>aarray[i];
    }
    flag=aarray[n];
    if(flag==15)
    {
        cout<<"DOWN"<<endl;
        return 0;
    }
    if(flag==0)
    {
        cout<<"UP"<<endl;
        return 0;
    }
    if(n==1)
    {
        cout<<-1<<endl;
        return 0;
    }
    if(n>1&&aarray[n-1]>flag)
    {
        cout<<"DOWN"<<endl;
        return 0;
    }
    cout<<"UP"<<endl;


}
