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
const int N = 3e5 + 10;
ll aarray[N];
ll magic[R][R];
vector<ll>primes;
bool check[1000001];
ll vis[N];
vector<pair<ll,ll>>v;
map<ll,ll>mp;
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,k,t,a,b;
    for(i=1; i<=8; i++)
    {
        cin>>a>>b;
        v.push_back({a,b});
    }
    sort(v.begin(),v.end());
    ll p=0;
    set<ll>s1,s2,f1,f2;
    ll c=0;
    for(auto it=v.begin(); it!=v.end(); it++)
    {
        c++;
        s1.insert(it->first);
        s2.insert(it->second);
        f1.insert(it->first);
        f2.insert(it->second);
        if(c==3&&p==0)
        {
            p=1;
            if(s1.size()!=1||s2.size()!=3)
            {
                cout<<"ugly"<<endl;
                return 0;
            }
            s1.clear();
            s2.clear();
        }
        if(c==5&&p==1)
        {
            p=2;
            if(s1.size()!=1||s2.size()!=2)
            {
                cout<<"ugly"<<endl;
                return 0;
            }
            s1.clear();
            s2.clear();

        }
        if(c==8&&p==2)
        {

            if(s1.size()!=1||s2.size()!=3)
            {
                cout<<"ugly"<<endl;
                return 0;
            }
            s1.clear();
            s2.clear();

        }

    }
    if(f1.size()!=3||f2.size()!=3)
    {
        cout<<"ugly"<<endl;
        return 0;

    }
    cout<<"respectable"<<endl;

    return 0;
}




