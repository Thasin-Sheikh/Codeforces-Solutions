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
    string str1,str2,str3;
    ll a,b,c,d,e,f,x,y,k,t,A=0,mod,B=0,L,j,i,l,r,m,n,C=0,ans=0,sum=0,sum1=0;
    vector<ll>v,v1;
    queue<ll>qu;
    char mx,mn,md;
    cin>>str1>>str2>>str3;
    ll count[3];
    for(i=0;i<3;i++)
        count[i]=0;
    if(str1[1]=='>')
    {
        count[str1[0]-'A']++;
    }
    else
    {
        count[str1[2]-'A']++;
    }
    if(str2[1]=='>')
    {
        count[str2[0]-'A']++;
    }
    else
    {
        count[str2[2]-'A']++;
    }
    if(str3[1]=='>')
    {
        count[str3[0]-'A']++;
    }
    else
    {
        count[str3[2]-'A']++;
    }
    ll f1=0,f2=0;
    f=0;
    for(i=0;i<3;i++)
    {
        if(count[i]==2)
        {
            mx=char(i+65);
            f=1;
        }
        if(count[i]==1)
        {
            md=char(i+65);
            f1=1;
        }
        if(count[i]==0)
        {
            mn=char(i+65);
            f2=1;
        }
    }
    if(f1&&f2&&f)
    cout<<mn<<md<<mx<<endl;
    else cout<<"Impossible"<<endl;



    return 0;
}

