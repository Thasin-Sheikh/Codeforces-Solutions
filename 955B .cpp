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
    makefast__
    string str;
    ll i,j,n,m,k,t;
    cin>>str;
    ll cnt[30]={0};
    set<char>sl;
    for(i=0;i<str.length();i++)
    {
       cnt[str[i]-'a']++;
       sl.insert(str[i]);
    }
    if(sl.size()>4||sl.size()==1)
    {
        cout<<"No"<<endl;
        return 0;
    }
    if(sl.size()==4)
    {
        cout<<"Yes"<<endl;
        return 0;
    }
    if(sl.size()==3&&str.length()==3)
    {
        cout<<"No"<<endl;
        return 0;
    }
    if(sl.size()==2)
    {
        ll c=0;
        for(i=0;i<26;i++)
        {
            if(cnt[i]>=2)
            {
                c++;
            }
        }
        if(c<2)
        {
            cout<<"No"<<endl;
            return 0;
        }
    }
    cout<<"Yes"<<endl;

    return 0;
}




