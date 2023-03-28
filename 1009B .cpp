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
using ull=unsigned long long;
const int N = 2e5 + 10;
ll aarray[N];
ll magic[505][505];
vector<ll>primes;
bool ok[1000001];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,k,t;
    cin>>str;
    ll cnt[5]={0};
    ll f=0;
    for(i=0;i<str.size();i++)
    {
        cnt[str[i]-'0']++;
        if(str[i]=='2'&&f==0)
        {
            k=i;
            f=1;
        }
    }
    ll zero=0;
    for(i=k;i<str.size();i++)
    {
        if(str[i]=='0')
        {
            zero++;
        }
    }
    ll z=cnt[0]-zero;
    ll o=cnt[1];
    t=cnt[2];
    while(z--)
    {
        cout<<0;
    }
    while(o--)
        cout<<1;
        for(i=k;i<str.size();i++)
        {
            if(str[i]!='1')
                cout<<str[i];
        }
    cout<<endl;
    return 0;
}



