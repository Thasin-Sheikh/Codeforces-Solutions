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
const long MAXN=5e5+10;
ll aarray[N];
ll magic[R][R];
vector<ll>primes;
bool check[1000001];
ll large[10000005];
ll vis[N];
map<ll,ll>mp;
string str;

void solve()
{
    ll i,j,k,m,n,l,r,q,ans,sum=0;
    bool yes=true;
    vector<ll>v;
    cin>>str;
    ll c=0,s=0,num=0;
    for(i=0; i<str.size(); i++)
    {
        if(str[i]>='a'&&str[i]<='z')
        {
            s++;
        }
        else if(str[i]>='A'&&str[i]<='Z')
        {
            c++;
        }
        else num++;
    }
    if(num&&c&&s)
    {
        //cout<<1<<endl;
        cout<<str<<"\n";
        return ;
    }
    if(num&&s)
    {
        for(i=0; i<str.size(); i++)
        {
            if(str[i]>='a'&&str[i]<='z')
            {
                s--;
                if(s!=0)
                {
                    str[i]='A';
                    cout<<str<<"\n";
                    return ;
                }
                else
                    s++;
            }
            if((str[i]-'0')>=0&&(str[i]-'0')<=9)
            {
                num--;
                if(num!=0)
                {
                    str[i]='A';

                    cout<<str<<"\n";
                    return ;

                }
                else num++;
            }
        }
    }
    if(num&&c)
    {
        for(i=0; i<str.size(); i++)
        {
            if(str[i]>='A'&&str[i]<='Z')
            {
                c--;
                if(c!=0)
                {
                    str[i]='a';
                    cout<<str<<"\n";
                    return ;
                }
                else
                    c++;
            }
            if((str[i]-'0')>=0&&(str[i]-'0')<=9)
            {
                num--;
                if(num!=0)
                {
                    str[i]='a';
                    cout<<str<<"\n";
                    return ;

                }
                else num++;
            }
        }
    }
    if(c&&s)
    {
        for(i=0;i<str.size();i++)
        {
            if(str[i]>='a'&&str[i]<='z')
            {
                s--;
                if(s)
                {
                    str[i]='1';
                    cout<<str<<"\n";
                    return ;
                }
                else s++;
            }
            if(str[i]>='A'&&str[i]<='Z')
            {
                c--;
                if(c)
                {
                    str[i]='1';
                    cout<<str<<"\n";
                    return ;
                }
                else c++;
            }
        }
    }
    if(c)
    {
        str[0]='a';
        str[1]='1';
    }
    if(s)
    {
        str[0]='A';
        str[1]='1';
    }
    if(num)
    {
        str[0]='a';
        str[1]='A';
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


