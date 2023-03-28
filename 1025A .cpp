/***By the name of Allah***/
///**Author Thasin Sheikh**///
#include<bits/stdc++.h>
using namespace std;
long long int po[1005][10];
vector<int>primes;
#define MAX 35000
#define makefast__  ios_base::sync_with_stdio(false);
using ll=long long int  ;
using dl =double;
int main()
{
    makefast__
    string str,ptr;
    char ch;
    ll i=0,j,m,a,b,c,d,n,l,t,s,x,p=0,cnt=0,mn;
    cin>>m;
    cin>>str;
    ll count[26];
    memset(count,0,sizeof(count));
    for(i=0;i<str.length();i++)
    {
        count[str[i]-'a']++;
    }
    sort(count,count+26);
    m=count[25];
    if(str.length()==1)
        cout<<"YES"<<endl;
    else if(m>=2)
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;


}
