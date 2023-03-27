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
    makefast__
    string str,s,p;
    ll i,j,n,m,k,t;
    cin>>n>>m;
    k=n-m;
    str=to_string(n);
    string ans=str;
    vector<string>v;
    p=str;
    for(i=str.length()-1; i>=0; i--)
    {
        if(str[i]=='9')
            continue;
        str[i]='9';
        for(j=i-1;j>=0;j--)
        {
            if(str[j]!='0')
            {
                str[j]--;
                break;
            }
            else str[j]='9';
        }
        str.erase(0,str.find_first_not_of('0'));
        ll hu;
        stringstream hi(str);
       hi>>hu;
        if(hu<k)
        {
            //cout<<1<<endl;
            break;
        }
        else if(hu>n)
        {
            //cout<<2<<endl;
            break;
        }
        else ans=str;
    }
    cout<<ans<<endl;


    return 0;
}




