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
    string str,bob,ans;
    ll i,j,n,m,k,t,z=0;
    cin>>str;
    cin>>bob;
    sort(str.begin(),str.end());
    if(str=="0")
    {
        if(bob=="0")
        {
            cout<<"OK"<<'\n';
        }
        else cout<<"WRONG_ANSWER"<<'\n';
        return 0;
    }
    for(i=0;i<str.length();i++)
    {
        if(str[i]=='0')
        {
            z++;
        }
        else
        {
            ans+=str[i];
            for(j=0;j<z;j++)
            {
                ans+='0';
            }
            for(j=i+1;j<str.length();j++)
            {
                ans+=str[j];
            }
            break;
        }
    }
    if(ans==bob)
    {
        cout<<"OK"<<'\n';
    }
    else cout<<"WRONG_ANSWER"<<'\n';

    return 0;
}

