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
const long maxn=5e5+10;
ll aarray[N];
ll magic[R][R];
vector<ll>primes;
bool check[1000001];
ll large[10000005];
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};
ll vis[N];
map<ll,ll>mp;
multiset<ll>s;
vector<pair<string,ll>>ans;
void solve()
{
    ll i,j,k,m,n,l,r,q,p,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>str;
        if(str!="removeMin")
        {
            cin>>l;
        }
        if(str=="insert")
        {
            ans.push_back({str,l});
            s.insert(l);
        }
        else if(str=="removeMin")
        {
            if(s.size()==0)
            {
                ans.push_back({"insert",0});
                ans.push_back({str,LLONG_MIN});

            }
            else
            {
                k=*s.begin();
                while(s.size()&&*s.begin()==k)
                {
                    // cout<<1<<endl;
                    ans.push_back({str,LLONG_MIN});
                    s.erase(s.begin());
                }
            }
        }
        else
        {
            if(s.size()&&*s.begin()==l)
            {
                ans.push_back({str,l});
            }
            else
            {
                while(s.size()&&*s.begin()<l)
                {
                    //  cout<<10<<endl;
                    s.erase(s.begin());
                    ans.push_back({"removeMin",LLONG_MIN});
                }
                //cout<<1<<endl;
                if(s.size()&&*s.begin()==l)
                {
                    ans.push_back({str,l});
                }
                else{
                ans.push_back({"insert",l});
                s.insert(l);
                ans.push_back({str,l});}
            }
        }
    }
    cout<<ans.size()<<"\n";
    for(i=0; i<ans.size(); i++)
    {
        if(ans[i].second==LLONG_MIN)
        {
            cout<<ans[i].first<<"\n";
        }
        else
        {
            cout<<ans[i].first<<" "<<ans[i].second<<"\n";
        }
    }
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //tle khaite chas to endl use kor
    //no test case in interactive ,check it idiot
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

