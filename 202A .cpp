///*Bismillahir Rahmanir Rahim***///
/***Stay_Home_Stay_Safe***/
///**Author Thasin Sheikh**///
#include<bits/stdc++.h>
using namespace std;
#define MAX 35000
#define MOD 1000000007
#define PI 3.14159265359
#define makefast__  ios_base::sync_with_stdio(false);
using ll=long long int  ;
using dl =double;
const int N = 2e5 + 10;
ll aarray[200000+10];
ll magic[101][101];
vector<ll>primes;
bool prime[1000001];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str,ans=" ";
    ll a,b,c,d,e,f,x,y,k,t,A=0,mod,B=0,L,j,i,l,r,m,n,C=0,sum=0,sum1=0;
    vector<ll>v,v1;
    queue<ll>qu;
    ll count[26];
    for(i=0; i<26; i++)
        count[i]=0;
    cin>>str;
    string ptr;
    ptr=str;
    reverse(ptr.begin(),ptr.end());
    if(ptr==str)
        ans=ptr;
    for(i=0; i<str.length(); i++)
    {
        count[str[i]-'a']++;
    }
    for(i=0; i<str.length(); i++)
    {
        x=count[str[i]-'a'];
        string pnt;
        while(x)
        {
            pnt+=str[i];
            x--;
        }
        if(pnt>ans)
            ans=pnt;
    }
    cout<<ans<<endl;


    return 0;
}
