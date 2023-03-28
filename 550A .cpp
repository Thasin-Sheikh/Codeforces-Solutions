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
    string str;
    ll i,j,n,m,k=0,t;
    cin>>str;
    for(i=0; i<str.length()-1; i++)
    {
        if(str[i]=='A'&&str[i+1]=='B')
        {
            k=1;
            i+=2;
        }
        if(str[i]=='B'&&str[i+1]=='A'&&k==1)
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    k=0;
    for(i=0; i<str.length()-1; i++)
    {
        if(str[i]=='B'&&str[i+1]=='A')
        {
            k=1;
            i+=2;
        }
        if(str[i]=='A'&&str[i+1]=='B'&&k==1)
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}


