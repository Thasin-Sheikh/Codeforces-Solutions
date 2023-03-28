///*Bismillahir Rahmanir Rahim***///
///**Author Thasin Sheikh**///
/*    #include <regex>
    ...
    std::string string("hello $name");
    string = std::regex_replace(string, std::regex("\\$name"), "Somename");
    */
#include<bits/stdc++.h>
#include<regex>
#include<math.h>
using namespace std;
long long int po[1005][10];
vector<int>primes;
#define MAX 35000
#define makefast__  ios_base::sync_with_stdio(false);
using ll=long long int  ;
using dl =double;
set<ll>sc,ans;
int main()
{
    makefast__
    string ptr,str,uni;
    ll n,candy=0,move=0,m,eat=0,l=2,k,i,j;
    vector<pair<ll,ll>>cv;
    ll count[1001];
    vector<string>sv;
    char apple[101][101];
    memset(count,0,sizeof(count));
    vector<ll>vl;
    char ch[101][101];
    char ch1;
    list<ll>lc;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            cin>>apple[i][j];
        }
    }
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            ll c=0;
            if(apple[i][j-1]=='o')
            {
                c++;
                //cout<<apple[i][j]<<endl;
            }
            if(apple[i][j+1]=='o')
            {
                c++;
                //cout<<apple[i][j]<<endl;
            }
            if(apple[i-1][j]=='o')
            {
                c++;
                //cout<<apple[i][j]<<endl;
            }
            if(apple[i+1][j]=='o')
            {
                c++;
                //cout<<apple[i][j]<<endl;
            }
            if(c%2!=0)
            {
                cout<<"NO"<<endl;
                return 0;
            }
        }

    }
    cout<<"YES"<<endl;
}
