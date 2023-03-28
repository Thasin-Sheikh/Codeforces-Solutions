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
map<ll,ll>mp;
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //tle khaite chas to endl use kor
    makefast__
    string str;
    ll i,j,n,m,k,t;
    cin>>str;
    n=str.length();
    for(i=0; i<n; i++)
    {
        k=str[i]-'0';
        mp[k]++;
    }
    if(mp[0])
    {
        cout<<"YES"<<"\n";
        cout<<0<<"\n";
        return 0;
    }
    if(mp[8])
    {
        cout<<"YES"<<"\n";
        cout<<8<<"\n";
        return 0;
    }
    reverse(str.begin(),str.end());
    str+="00";
    reverse(str.begin(),str.end());
    n=str.length();
    for(i=0; i<n-2; i++)
    {
        for(j=i+1; j<n-1; j++)
        {
            for(k=j+1; k<n; k++)
            {
                string ss;
                ss+=str[i];
                ss+=str[j];
                ss+=str[k];
                ll s;
                s=stoi(ss);
                if(s%8==0)
                {
                    cout<<"YES"<<"\n";
                    if(i!=0&&i!=1)
                    cout<<str[i];
                    if(j!=1)
                    {
                        cout<<str[j];
                    }
                       cout<<str[k];
                    cout<<"\n";
                    return 0;
                }
            }
        }
    }
    cout<<"NO"<<"\n";
    return 0;
}

