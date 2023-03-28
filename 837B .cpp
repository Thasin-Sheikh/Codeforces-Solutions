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
char magic[R][R];
vector<ll>primes;
bool check[1000001];
ll vis[N];
map<char,ll>row;
map<char,ll>col;
multiset<ll>s[100];
void solve()
{
    ll i,j,k,m,n,l,r,q,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n>>m;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            cin>>magic[i][j];
        }
    }
    for(i=1; i<=n; i++)
    {
        set<char>s;
        for(j=1; j<=m; j++)
        {
            s.insert(magic[i][j]);

        }
        if(s.size()==1)
        {
            row[magic[i][1]]++;
        }
        else
        {

            for(k=1; k<=m; k++)
            {
                for(l=2; l<=n; l++)
                {
                    if(magic[l][k]!=magic[l-1][k])
                    {
                        cout<<"NO"<<"\n";
                        return ;
                    }

                }
            }

        }
    }
    for(j=1; j<=m; j++)
    {
        set<char>s;
        for(i=1; i<=n; i++)
        {
            s.insert(magic[i][j]);

        }
        //cout<<s.size()<<endl;
        if(s.size()==1)
        {
            col[magic[1][j]]++;
        }
    }
    //cout<<1<<endl;
    if(row['R']!=row['G']&&row['G']!=row['B']&&col['R']!=col['G']&&col['G']!=col['B'])
    {
        cout<<"NO"<<"\n";
        return ;
    }
    if(row['R']==row['G']&&row['R']!=0)
    {

        char cc;
        ll c=1;
        for(i=2; i<=n; i++)
        {
            //   cout<<i<<endl;

            if(magic[i][1]==magic[i-1][1])
            {
                c++;
            }
            else
            {
                s[magic[i-1][1]-'A'].insert(c);
                c=1;
                if(i==n)
                {
                    s[magic[i][1]-'A'].insert(c);
                }
            }
            if(i==n&&magic[i][1]==magic[i-1][1])
            {
                s[magic[i-1][1]-'A'].insert(c);

            }
        }
        //cout<<1<<endl;
        if(s['R'-'A'].size()==0||s['G'-'A'].size()==0||s['B'-'A'].size()==0)
        {
            cout<<"NO"<<"\n";
            return ;
        }
        // cout<<1<<endl;
        if(s['R'-'A'].size()>1||s['G'-'A'].size()>1||s['B'-'A'].size()>1)
        {
            cout<<"NO"<<"\n";
            return ;
        }
        auto it=s['R'-'A'].end();
        it--;
        auto jt=s['R'-'A'].begin();
        if(*it!=*jt)
        {
            cout<<"NO"<<"\n";
            return ;
        }
        auto iit=s['G'-'A'].end();
        iit--;
        auto jjt=s['G'-'A'].begin();
        if(*iit!=*jjt)
        {
            cout<<"NO"<<"\n";
            return ;
        }
        auto iiit=s['B'-'A'].end();
        iiit--;
        auto jjjt=s['B'-'A'].begin();
        if(*iiit!=*jjjt)
        {
            cout<<"NO"<<"\n";
            return ;
        }
        if(*it!=*iit||*it!=*iiit||*iit!=*iiit)
        {
            cout<<"NO"<<"\n";
            return ;
        }
        cout<<"YES"<<"\n";
    }
    else
    {
        //cout<<1<<endl;
        ll c=1;
        for(i=2; i<=m; i++)
        {
            if(magic[1][i]==magic[1][i-1])
            {
                c++;
            }
            else
            {
                s[magic[1][i-1]-'A'].insert(c);
                c=1;
                if(i==m)
                {
                    s[magic[1][i]-'A'].insert(c);
                }
            }
            if(i==m&&magic[1][i]==magic[1][i-1])
            {
                s[magic[1][i-1]-'A'].insert(c);

            }
        }
        if(s['R'-'A'].size()==0||s['G'-'A'].size()==0||s['B'-'A'].size()==0)
        {
            cout<<"NO"<<"\n";
            return ;
        }
        if(s['R'-'A'].size()>1||s['G'-'A'].size()>1||s['B'-'A'].size()>1)
        {
            cout<<"NO"<<"\n";
            return ;
        }
        auto it=s['R'-'A'].end();
        it--;
        auto jt=s['R'-'A'].begin();
        if(*it!=*jt)
        {
            cout<<"NO"<<"\n";
            return ;
        }
        auto iit=s['G'-'A'].end();
        iit--;
        auto jjt=s['G'-'A'].begin();
        if(*iit!=*jjt)
        {
            cout<<"NO"<<"\n";
            return ;
        }
        auto iiit=s['B'-'A'].end();
        iiit--;
        auto jjjt=s['B'-'A'].begin();
        if(*iiit!=*jjjt)
        {
            cout<<"NO"<<"\n";
            return ;
        }
        if(*it!=*iit||*it!=*iiit||*iit!=*iiit)
        {
            cout<<"NO"<<"\n";
            return ;
        }
        cout<<"YES"<<"\n";

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


