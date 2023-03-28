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
ll digit (char ch)
{
    if(ch=='0')
        return 2;
    if(ch=='1')
        return 7;
    if(ch=='2')
        return 2;
    if(ch=='3')
        return 3;
    if(ch=='4')
        return 3;
    if(ch=='5')
        return 4;
    if(ch=='6')
        return 2;
    if(ch=='7')
        return 5;
    if(ch=='8')
        return 1;
    if(ch=='9')
        return 2;
}
int main()
{

    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str,ptr,ans=" ";
    ll a,b,c,d,e,f,x=INT_MAX,y,k,t,A=0,mod,B=0,L,j,i,l,r,m,n,C=0,sum=0,sum1=0;
    vector<ll>v,v1;
    queue<ll>qu;
    cin>>str;
    a=digit(str[0]);
    b=digit(str[1]);
    cout<<a*b<<endl;
}
