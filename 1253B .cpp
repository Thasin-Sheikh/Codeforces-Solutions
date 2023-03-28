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
map<ll,ll>mp,pp;
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //tle khaite chas to endl use kor
    makefast__
    string str;
    ll i,j,n,m,k,t;
    cin>>n;
    vector<ll>v;
    for(i=1;i<=n;i++)
    {
        cin>>aarray[i];
    }
    ll c=0,d=0;
    for(i=1;i<=n;i++)
    {
        if(aarray[i]>0)
        {
            if(pp[aarray[i]])
            {
                cout<<-1<<"\n";
                return 0;
            }
            mp[aarray[i]]++;
            pp[aarray[i]]++;
            d++;
        }
        else
        {
            if(mp[abs(aarray[i])]==0)
            {
                cout<<-1<<"\n";
                return 0;
            }
            mp[abs(aarray[i])]--;
            d--;
        }
        c++;
        if(d==0)
        {
            v.push_back(c);
            c=0;
            pp.clear();

        }
    }
    if(d)
    {
        cout<<-1<<"\n";
        return 0;
    }
    cout<<v.size()<<'\n';
    for(auto c:v)
    {
        cout<<c<<" ";
    }
    cout<<"\n";
    return 0;
}

