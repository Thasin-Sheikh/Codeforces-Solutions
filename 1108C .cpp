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
ll ans=INT_MAX;
string ptr,p1;
ll gen(string str)
{
    string s,s1;
    ll i,k,n,c=0;
    s1=ptr;
    for(i=0; i<ptr.length(); i++)
    {
        k=i%3;
        if(ptr[i]!=str[k])
            c++;
        s1[i]=str[k];

    }
    if(c<ans)
    {
        ans=c;
        p1=s1;
    }
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,k,t;
    cin>>n;
    cin>>ptr;
    gen("RBG");
    gen("RGB");
    gen("BGR");
    gen("BRG");
    gen("GBR");
    gen("GRB");
    cout<<ans<<endl;
    cout<<p1<<endl;

    return 0;
}


