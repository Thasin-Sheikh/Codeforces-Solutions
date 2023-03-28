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
    string str;
    ll i,j,n,m,k,t;
    string a,a1,b,b1,c,d;
    cin>>a>>a1>>b>>b1;
    swap(a1[0],a1[1]);
    swap(b1[0],b1[1]);
    c=a+a1;
    d=b+b1;
    c.erase(c.find('X'),1);
    d.erase(d.find('X'),1);
    c=c+c;
    if(c.find(d)!=c.npos)
    {
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;


    return 0;
}


