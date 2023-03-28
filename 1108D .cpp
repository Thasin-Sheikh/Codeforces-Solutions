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
bool ok[1000001];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str,ans;
    ll i,j,n,m,k,t;
    ll cur=0;
    cin>>n;
    cin>>str;
    ans=str;
    for(i=0; i<str.length()-1; i++)
    {
        if(str[i]==str[i+1])
        {
            if(str[i]=='B')
            {
                if(str[i+2]=='R')
                {
                    str[i+1]='G';
                }
                else if(str[i+2]=='G')
                    str[i+1]='R';
                else str[i+1]='R';
            }
            else if(str[i]=='R')
            {
                if(str[i+2]=='B')
                {
                    str[i+1]='G';
                }
                else if(str[i+2]=='G')
                    str[i+1]='B';
                else str[i+1]='B';
            }
            else  if(str[i]=='G')
            {
                if(str[i+2]=='R')
                {
                    str[i+1]='B';
                }
                else if(str[i+2]=='B')
                    str[i+1]='R';
                else str[i+1]='R';
            }

        }
        else continue;
    }
    for(i=0;i<str.length();i++)
    {
        if(ans[i]!=str[i])
            cur++;
    }
    cout<<cur<<endl;
    cout<<str<<endl;
    return 0;
}


