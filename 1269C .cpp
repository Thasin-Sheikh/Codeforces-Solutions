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
    string str,ptr;
    ll a,b,c,d,e,f,x,y,k,t,A=0,B=0,L,j,i,l,r,m,n,C=0,ans=0,sum=0,sum1=0;
    vector<ll>v,v1;
    queue<ll>qu;
    cin>>n>>k;
    cin>>str;
    ptr=str;
    for(i=k; i<str.length(); i++)
    {
        str[i]=str[i-k];
    }
    if(str>=ptr)
    {
        cout<<n<<endl;
        cout<<str<<endl;
        return 0;
    }
    for(i=k-1; i>=0; i--)
    {
        if(ptr[i]=='9')
        {
            ptr[i]='0';
        }
        else
        {
            ptr[i]++;
            break;
        }
    }
    for(i=k; i<n; i++)
    {
        ptr[i]=ptr[i-k];
    }
    cout<<n<<endl<<ptr<<endl;
    return 0;
}
