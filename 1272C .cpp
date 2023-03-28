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
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,k,t;
    cin>>n>>m;
    set<char>sc,sg;
    cin>>str;
    char ch;
    for(i=1;i<=m;i++)
    {
        cin>>ch;
        sc.insert(ch);
    }
    for(i=0;i<str.length();i++)
    {
        sg.insert(str[i]);
    }
    if(sc==sg)
    {
        cout<<(n*(n+1))/2<<endl;
        return 0;
    }
    for(i=0;i<26;i++)
    {
        if(sc.find(char(97+i))!=sc.end())
            continue;
        else
        {
            str.push_back(char(97+i));
            break;
        }
    }
    ll c=0,ans=0;
    for(i=0;i<str.length();i++)
    {
        if(sc.find(str[i])!=sc.end())
        {
            c++;
        }
        else
        {
            ans+=(c*(c+1))/2;
            c=0;

        }
    }
    cout<<ans<<endl;

    return 0;
}


