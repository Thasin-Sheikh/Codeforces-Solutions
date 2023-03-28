///*Bismillahir Rahmanir Rahim***///
/***Stay_Home_Stay_Safe***/
///**Author Thasin Sheikh**///
#include<bits/stdc++.h>
using namespace std;
#define MAX 1e6+10
#define MOD 1000000007
#define PI 3.14159265359
#define makefast__  ios_base::sync_with_stdio(false);
using ll=long long int  ;
using dl =double;
const int N = 2e5 + 10;
ll aarray[200000+10];
ll magic[101][101];
vector<ll>primes;
bool prime[1000001];
vector<pair<char,ll>>v;
vector<pair<char,ll>>v1;
void solve()
{
    ll i,j,n,m,k;
    string s1,s2;
    cin>>s1>>s2;
    char ch;
    ch=s1[0];
    s1.push_back('0');
    s2.push_back('0');
    ll c=1;
    for(i=1; i<s1.length(); i++)
    {
        if(s1[i]==ch)
        {
            c++;
        }
        else
        {
            v.push_back({ch,c});
            ch=s1[i];
            c=1;
        }

    }
    ch=s2[0];
    s2.push_back('0');
    c=1;
    for(i=1; i<s2.length(); i++)
    {
        if(s2[i]==ch)
        {
            c++;
        }
        else
        {
            v1.push_back({ch,c});
            ch=s2[i];
            c=1;
        }
    }
    for(i=0; i<v.size(); i++)
    {
        if(v.size()!=v1.size())
        {
            cout<<"NO"<<endl;
            v.clear();
            v1.clear();
            return ;
        }
        if(v[i].first!=v1[i].first||v[i].second>v1[i].second)
        {
            cout<<"NO"<<endl;
            v.clear();
            v1.clear();
            return ;
        }
    }
    cout<<"YES"<<endl;
    v.clear();
    v1.clear();
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
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


