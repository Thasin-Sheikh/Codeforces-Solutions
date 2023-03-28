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
    string str,s1,s2;
    ll i,j,n,m,k,t;
    cin>>n;
    cin>>str;
    ll f=0;
    for(i=0;i<str.length();i++)
    {
        if(str[i]>str[i+1])
        {
            str[i]='0';
            f=1;
            break;
        }
    }
    if(!f)
        str[str.size()-1]='0';
    for(i=0;i<str.size();i++)
    {
        if(str[i]!='0')
            cout<<str[i];
    }
    cout<<endl;
    return 0;
}


