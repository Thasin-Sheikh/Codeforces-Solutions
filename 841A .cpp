/***By the name of Allah***/
///**Author Thasin Sheikh**///
#include<bits/stdc++.h>
using namespace std;
long long int po[1005][10];
vector<int>primes;
#define MAX 35000
#define makefast__  ios_base::sync_with_stdio(false);
using ll=long long ;
using dl =long double;
int main()
{
    makefast__
    ll n,m,i,j,ans,array[100010],ma,t,two=2,minn=INT_MIN;
    ll count[10000];
    string str;
    memset(count,0,sizeof(count));
    cin>>n>>m;
    cin>>str;
    for(i=0;i<str.length();i++)
    {
        count[str[i]-'a']++;
    }
    ll a=0;
    for(i=0;i<26;i++)
    {
        if(count[i]>a)
        {
            a=count[i];
        }
    }
    if(a>m)
        cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}
