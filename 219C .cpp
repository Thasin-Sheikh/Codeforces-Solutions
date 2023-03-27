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
ll vis[N];
map<ll,ll>mp;
ll cnt[30],cc[30];
void solve()
{
    ll i,j,k,m,n,l,r,q,p,ans,sum=0;
    string str;
    bool yes=true;
    vector<char>v;
    cin>>n>>k;
    cin>>str;
    for(i=0; i<k; i++)
    {
        v.push_back('A'+i);

    }
    if(k==2)
    {
        string tmp1,tmp2;
        for(i=0;i<n;i++)
        {
            if(i%2)
            {
                tmp1+='A';
                tmp2+='B';
            }
            else
            {
                tmp2+='A';
                tmp1+='B';
            }
        }
        ll c1=0,c2=0;
        for(i=0;i<n;i++)
        {
            if(str[i]!=tmp1[i])
            {
                c1++;
            }
            if(str[i]!=tmp2[i])
            {
                c2++;
            }
        }
        if(c1<c2)
        {
            cout<<c1<<"\n";
            cout<<tmp1<<"\n";
        }
        else
        {
            cout<<c2<<"\n";
            cout<<tmp2<<"\n";
        }
        return ;
    }
    for(i=0; i<n-1; i++)
    {
        if(str[i]==str[i+1])
        {
            ll f=0;
            for(j=0; j<v.size(); j++)
            {
                if(v[j]!=str[i])
                {
                    if(i+2<n)
                    {
                        if(v[j]!=str[i+2])
                        {
                            sum++;
                            str[i+1]=v[j];
                            f=1;
                            break;
                        }
                    }
                    else
                    {
                        sum++;
                        str[i+1]=v[j];
                        f=1;
                        break;
                    }
                }
            }
            if(!f)
            {
                for(j=0; j<v.size(); j++)
                {
                    if(v[j]!=str[i])
                    {
                        if(i-1>=0)
                        {
                            if(v[j]!=str[i-1])
                            {
                                str[i]=v[j];
                                sum++;
                                break;
                            }
                        }
                        else
                        {
                            str[i]=v[j];
                            sum++;
                            break;
                        }
                    }
                }
            }

        }
    }
    cout<<sum<<"\n";
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
    t=1;
    while(t--)
    {
        solve();
    }

    return 0;
}


