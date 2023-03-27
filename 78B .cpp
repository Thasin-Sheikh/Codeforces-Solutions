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
    ll a,b,c,d,e,f,x,y,k,t,A=0,mod,B=0,L,j,i,l,r,m,n,C=0,ans=0,sum=0,sum1=0;
    vector<ll>v,v1;
    queue<ll>qu;
    char ch[7]= {'R','O','Y','G','B','I','V'};
    char ch1[6]= {'G','B','I','V','G','B'};

    cin>>n;
    f=n/7;
    while(f--)
    {
        for(i=0; i<7; i++)
            cout<<ch[i%7];
    }
    if(n%7)
    {
        for(i=0; i<n%7; i++)
            cout<<ch1[i%6];
    }
    return 0;
}

