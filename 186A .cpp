///*Bismillahir Rahmanir Rahim***///
/***Stay_Home_Stay_Safe***/
///**Author Thasin Sheikh**///
#include<bits/stdc++.h>
using namespace std;
#define MAX 1e6+10
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
    string str,ptr;
    ll a,b,c,d,e,f,x,y,k,t,q,p,A=0,mod,B=0,L,j,i,l,r,m,n,C=0,ans=0,sum=0,sum1=0;
    vector<ll>v,v1;
    queue<ll>qu;
    cin>>str>>ptr;
    for(i=0;i<min(str.length(),ptr.length());i++)
    {
        if(str[i]!=ptr[i])
            A++;
    }
    if(str.length()!=ptr.length())
    {
        cout<<"NO"<<endl;
        return 0;
    }
    if(A!=2)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    else
    {
        ll cs[26],cp[26];
        for(i=0;i<26;i++)
        {
            cs[i]=cp[i]=0;
        }
        for(i=0;i<str.length();i++)
        {
            cs[str[i]-'a']++;
            cp[ptr[i]-'a']++;
        }
        for(i=0;i<str.length();i++)
        {
            if(cs[str[i]-'a']!=cp[str[i]-'a'])
            {
                cout<<"NO"<<endl;
                return 0;
            }
        }
    }
    cout<<"YES"<<endl;


    return 0;
}


