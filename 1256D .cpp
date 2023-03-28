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
using ull=unsigned long long;
const long N = 3e5 + 10;
ll aarray[N];
ll magic[R][R];
vector<ll>primes;
bool check[1000001];
ll vis[N];
map<ll,ll>mp;
void solve()
{
    ll i,j,k,m,n,l,r,q,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n>>m;
    cin>>str;
    set<ll>s;
    for(i=0;i<n;i++)
    {
        if(str[i]=='0')
        {
            if(s.size()==0)
            {
                continue;
            }
            else
            {
                auto it=s.begin();
                if(m>=i-(*it))
                {
                    //cout<<m<<" "<<(i-(*it))<<endl;
                    m-=(i-(*it));
                    swap(str[*it],str[i]);
                    //cout<<m<<" "<<str<<endl;
                    s.erase(s.begin());
                    s.insert(i);

                }
                else
                {
                    ll a=-1;
                    //cout<<m<<endl;
                    for(j=i;j>=0;j--)
                    {
                        if(i-j<=m)
                        {
                            //cout<<j-i<<endl;
                            if(str[j]=='1')
                            a=j;

                        }
                        else break;
                    }
                    //cout<<str<<endl;
                    //cout<<a<<endl;
                    if(a!=-1)
                    {
                        swap(str[a],str[i]);
                        break;
                    }
                }
            }
        }
        else
        {
            s.insert(i);
        }

    }
    cout<<str<<"\n";
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //tle khaite chas to endl use kor
    makefast__
    string str;
    ll i,j,n,m,k,t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
