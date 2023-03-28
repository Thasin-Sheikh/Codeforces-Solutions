///*Bismillahir Rahmanir Rahim***///
/***Stay_Home_Stay_Safe***/
///**Author Thasin Sheikh**///
#include<bits/stdc++.h>
using namespace std;
#define MAX 1e6+10
#define MOD 1000000007
#define PI 3.14159265359
#define makefast__  ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using ll=long long int  ;
using dl =double;
using ull=unsigned long long;
const int N = 2e5 + 10;
ll aarray[N];
ll magic[505][505];
vector<ll>primes;
bool ok[1000001];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string s,t;
    ll i,j,n,m,k,y=0,w=0;
    ll cb[30]= {0},cbb[30]= {0};
    cin>>s>>t;
    for(i=0; i<t.length(); i++)
    {

        if(t[i]>='a'&&t[i]<='z')
        {
            cb[t[i]-'a']++;
        }
        else
        {
            cbb[t[i]-'A']++;
        }
    }
    ll ans=0;
    for(i=0; i<s.length(); i++)
    {
        if(s[i]>='a'&&s[i]<='z')
        {
            if(cb[s[i]-'a']>0)
            {
                y++;
                cb[s[i]-'a']--;
                s[i]='0';
            }
        }
        else
        {
            if(cbb[s[i]-'A']>0)
            {
                y++;
                cbb[s[i]-'A']--;
                s[i]='0';
            }
        }
    }
    //cout<<y<<endl;
    for(i=0; i<s.length(); i++)
    {
        if(s[i]>='a'&&s[i]<='z')
        {
            char ch=toupper(s[i]);
            if(cbb[char(ch)-'A']>0)
            {
                cbb[char(ch)-'A']--;
                w++;
            }
        }
        else if(s[i]>='A'&&s[i]<='Z')
        {
            char ch=tolower(s[i]);
            if(cb[char(ch)-'a']>0)
            {
                cb[char(ch)-'a']--;
                w++;
            }
        }
    }
    cout<<y<<" "<<w<<endl;

    return 0;
}
