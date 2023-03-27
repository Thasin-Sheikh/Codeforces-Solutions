
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
    makefast__
    string str;
    ll a,b,c,d,e,f,x,y,k,t,A=0,B=0,L,j,i,l,r,m,n,C=0,ans=0,sum=0,sum1=0;
    vector<ll>v,v1;
    queue<ll>qu;
    cin>>n;
    cin>>str;
    if(n%2==0)
    {
        ll cnt=0;
        for(i=0; i<str.length()-2; i++)
        {
            cout<<str[i];
            cnt++;
            if(cnt%2==0)
                cout<<"-";
        }
        cout<<str[str.length()-2]<<str[str.length()-1]<<endl;
    }
    else
    {
        ll cnt=0;
        for(i=0; i<str.length()-3; i++)
        {
            cout<<str[i];
            cnt++;
            if(cnt%2==0)
                cout<<"-";
        }
        cout<<str[str.length()-3]<<str[str.length()-2]<<str[str.length()-1]<<endl;

    }

    return 0;
}
