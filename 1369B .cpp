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
    ll a,b,c,d,e,f,x,y,k,t,A=0,B=0,L,j,i,l,r,m,n,C=0,sum=0,sum1=0;
    vector<ll>v,v1;
    queue<ll>qu;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>str;
        string ans;
        ll R;
        f=0;
        for(i=0; i<str.length()-1; i++)
        {
            if(str[i]=='1'&&str[i+1]=='0')
            {
                f=1;
                break;
            }
        }
        if(f)
        {
            for(i=0; i<str.length(); i++)
            {
                if(str[i]=='1')
                {
                    L=i;
                    break;
                }
            }
            for(i=str.length()-1; i>=0; i--)
            {
                if(str[i]=='0')
                {
                    R=i-1;
                    break;
                }
            }
            for(i=L; i<=R; i++)
                str[i]='2';
            for(i=0; i<str.length(); i++)
            {
                if(str[i]!='2')
                    ans+=str[i];
            }
            cout<<ans<<endl;
        }
        else
            cout<<str<<endl;

    }
    return 0;
}
