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
using ll=long long int ;
using dl =double;
using ld=long double;
using ull=unsigned long long;
const long N = 3e5 + 10;
ll aarray[N];
ll magic[R][R];
vector<ll>primes;
bool check[1000001];
ll vis[N];
map<char,ll>mp;
set<ll>ss[30];
void solve()
{
    ll i,j,k,m,n,l,r,q,ans,sum=0;
    string str,s,u="",t="";
    bool yes=true;
    vector<ll>v;
    cin>>s;
    n=s.size();
    stack<char>st;
    for(i=0; i<n; i++)
    {
        ss[s[i]-'a'].insert(i);
    }
    for(i=0; i<n; i++)
    {
        st.push(s[i]);
        while(st.size())
        {
            char c=st.top();
            ll f=1;
            for(char p='a';p<c;p++)
            {
                if(ss[p-'a'].size()==0)
                {
                    continue;
                }
                auto it=ss[p-'a'].end();
                it--;
                if(*it>i)
                {
                    f=0;
                    break;
                }
            }
            if(f)
            {
                u+=c;
                st.pop();
            }
            else break;
        }
        //cout<<i<<" "<<u<<endl;
    }
    while(st.size())
    {
        u+=st.top();
        st.pop();
    }
    cout<<u<<"\n";
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //tle khaite chas to endl use kor
    makefast__
    string str;
    ll i,j,n,m,k,t;
    t=1;
    while(t--)
    {
        solve();
    }

    return 0;
}


