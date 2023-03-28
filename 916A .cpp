///*Bismillahir Rahmanir Rahim***///
///**Author Thasin Sheikh**///
#include<bits/stdc++.h>
using namespace std;
long long int po[1005][10];
vector<int>primes;
#define MAX 35000
#define makefast__  ios_base::sync_with_stdio(false);
using ll=long long int  ;
using dl =double;
#include <bits/stdc++.h>
using namespace std;
int main()
{
    makefast__
    string ptr,ps[1001],s[1001];
    ll n,m,a,j,k,i,b,p,h,x,ans=0,extra=0,array[10000+10],d,ar[10000],sum=0,a1=0,a2=0,c=0;
    set<ll>ds,intg;
    char ch[100][100];
    cin>>x;
    cin>>h>>m;
    p=(h*60)+m;
    for(i=0;;i++)
    {
        k=p/60;
        m=p%60;
        if(k/10==7||k%10==7||m/10==7||m%10==7)
        {
            cout<<i<<endl;
            return 0;
        }
        p=(p-x+1440)%1440;
    }

}
