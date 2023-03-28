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
ll x[N],y[N];
void solve()
{
    ll i,j,k,m,n,l,r,q,p,sum=0;
    string str;
    bool yes=true;
    vector<pair<pair<ll,ll>,char>>ans,v;
    vector<pair<ll,ll>>cur,now,cur1,now1;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>l>>r;
        if(l<=0&&r<=0)
        {
            cur.push_back({l,r});
        }
        else if(l>=0&&r>=0)
        {
            now.push_back({l,r});
        }
        else if(l>=0&&r<=0)
        {
            cur1.push_back({l,abs(r)});
        }
        else if(l<=0&&r>=0)
        {
            now1.push_back({l,-r});

        }
    }
    sort(cur.rbegin(),cur.rend());
    sort(now.begin(),now.end());
    sort(cur1.begin(),cur1.end());
    sort(now1.rbegin(),now1.rend());
    //cout<<now.size()<<endl;
    for(i=0; i<cur.size(); i++)
    {
        l=cur[i].first;
        r=cur[i].second;
        if(l!=0)
        {
            ans.push_back({{1,abs(l)},'L'});
        }
        if(r!=0)
        {
            ans.push_back({{1,abs(r)},'D'});
        }
        ans.push_back({{2,0},'0'});
        if(r!=0)
        {
            ans.push_back({{1,abs(r)},'U'});
        }
        if(l!=0)
        {
            ans.push_back({{1,abs(l)},'R'});
        }
        ans.push_back({{3,0},'0'});
    }
    //cout<<ans.size()<<"\n";
    for(i=0; i<now.size(); i++)
    {
        l=now[i].first;
        r=now[i].second;
        if(l!=0)
        {
            ans.push_back({{1,abs(l)},'R'});
        }
        if(r!=0)
        {
            ans.push_back({{1,abs(r)},'U'});
        }
        ans.push_back({{2,0},'0'});
        if(r!=0)
        {
            ans.push_back({{1,abs(r)},'D'});
        }
        if(l!=0)
        {
            ans.push_back({{1,abs(l)},'L'});
        }
        ans.push_back({{3,0},'0'});
    }
     //cout<<ans.size()<<"\n";
    for(i=0; i<cur1.size(); i++)
    {
        l=cur1[i].first;
        r=cur1[i].second;
        if(l!=0)
        {
            ans.push_back({{1,abs(l)},'R'});
        }
        if(r!=0)
        {
            ans.push_back({{1,abs(r)},'D'});
        }
        ans.push_back({{2,0},'0'});
        if(r!=0)
        {
            ans.push_back({{1,abs(r)},'U'});
        }
        if(l!=0)
        {
            ans.push_back({{1,abs(l)},'L'});
        }
        ans.push_back({{3,0},'0'});
    }
     //cout<<ans.size()<<"\n";
    for(i=0; i<now1.size(); i++)
    {
        l=now1[i].first;
        r=now1[i].second;
        if(l!=0)
        {
            ans.push_back({{1,abs(l)},'L'});
        }
        if(r!=0)
        {
            ans.push_back({{1,abs(r)},'U'});
        }
        ans.push_back({{2,0},'0'});
        if(r!=0)
        {
            ans.push_back({{1,abs(r)},'D'});
        }
        if(l!=0)
        {
            ans.push_back({{1,abs(l)},'R'});
        }
        ans.push_back({{3,0},'0'});
    }
    cout<<ans.size()<<"\n";
    for(i=0; i<ans.size(); i++)
    {
        if(ans[i].second=='0')
        {
            cout<<ans[i].first.first<<"\n";
        }
        else
        {
            cout<<ans[i].first.first<<" "<<ans[i].first.second<<" "<<ans[i].second<<"\n";
        }
    }

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
