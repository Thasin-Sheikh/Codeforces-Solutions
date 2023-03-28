///*Bismillahir Rahmanir Rahim***///
/***Stay_Home_Stay_Safe***/
///**Author Thasin Sheikh**///
#include<bits/stdc++.h>
using namespace std;
#define MAX 1e6+10
#define MOD 1000000007
#define PI acos(-1)
#define R 510
#define makefast__  ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using ll=long long int  ;
using dl =double;
using ull=unsigned long long;
const long N = 3e5 + 10;
ll aarray[N];
ll magic[R][R];
vector<ll>primes;
bool check[1000001];
ll vis[N];
map<ll,ll>mp;
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //tle khaite chas to endl use kor
    makefast__
    string str;
    ll i,j,n,m,k,t=0,o=0,a,sa=0,st=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a;
        if(a==100)
        {
            o++;
            sa+=100;
        }
        else t++,st+=200;
    }
    if(n==1)
    {
        cout<<"NO"<<"\n";
        return 0;
    }
    ll tt=sa+st;
    if(tt%100)
    {
        cout<<"NO"<<"\n";
        return 0;
    }
    ll lagbe=tt/2;
    ll s1=0,s2=0;
    while(s1+200<=lagbe&&t)
    {
        s1+=200;
        t--;
    }
    while(s1+100<=lagbe&&o)
    {
        s1+=100;
        o--;
    }
    //cout<<s1<<endl;
    s2=o*100+t*200;
    if(s2==s1)
    {
        cout<<"YES"<<"\n";
    }
    else cout<<"NO"<<"\n";

}
