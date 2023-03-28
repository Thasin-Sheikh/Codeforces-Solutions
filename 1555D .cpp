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
ll pre[10][N];
void solve()
{
    ll i,j,k,m,n,l,r,q,p,ans,sum=0;
    string str;
    bool yes=true;
    vector<char>v;
    cin>>n>>q;
    cin>>str;
    v.push_back('a');
    v.push_back('b');
    v.push_back('c');
    ll cur=0;
    do
    {
        string s,t;
        t+=v[0];
        t+=v[1];
        t+=v[2];
       // cout<<t<<endl;
        while(s.size()<n)
        {
            s+=t;
        }
        //cout<<s<<endl;
        for(i=0; i<s.size(); i++)
        {
            if(i==0)
            {
                if(s[i]==str[i])
                    pre[cur][i]=0;
                else pre[cur][i]=1;
                continue;
            }
            if(s[i]==str[i])
            {

                pre[cur][i]=pre[cur][i-1];
            }
            else
            {
                pre[cur][i]=pre[cur][i-1]+1;
            }
        }
        cur++;
    }
    while(next_permutation(v.begin(),v.end()));
   /* for(i=0;i<6;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<pre[i][j]<<" ";
        }
        cout<<endl;
    }*/
    while(q--)
    {
        cin>>l>>r;
        l--,r--;
        ans=INT_MAX;
        for(i=0;i<6;i++)
        {
            k=l-1;
            if(k<0)
            {
                k=0;
            }
            else k=pre[i][k];
            ans=min(ans,pre[i][r]-k);
          //  cout<<i<<" "<<ans<<endl;
        }
        cout<<ans<<"\n";
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

