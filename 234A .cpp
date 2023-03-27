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
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,k,t;
    cin>>n;
    cin>>str;
    for(i=0;i<n/2;i++)
    {
        if(str[i]=='R'&&str[n/2+i]!='R')
        {
            cout<<n/2+i+1<<" "<<i+1<<endl;
        }
        else if(str[i]=='L'&&str[n/2+i]!='L')
        {
            cout<<i+1<<" "<<n/2+i+1<<endl;
        }
        else cout<<i+1<<" "<<n/2+i+1<<endl;
    }


    return 0;
}


