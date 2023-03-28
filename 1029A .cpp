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
string ptr;
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str,ptr,s;
    ll i,j,n,m,k;
    cin>>n>>k;
    cin>>str;
    m=0;
    for(i=0; i<n-1; i++)
    {
        ptr=str.substr(0,i+1);
        s=str.substr(n-i-1);
        if(s==ptr)
        {
            m=i+1;
        }
        cout<<s<<endl;
    }
    cout<<str;
    for(i=0; i<k-1; i++)
        cout<<str.substr(m);
    cout<<endl;


    return 0;
}


