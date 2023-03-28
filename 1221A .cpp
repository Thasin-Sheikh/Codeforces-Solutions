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
    ll n,i,j,p,m,after,a,b,c,t,k,f,sum,ans;
    vector<pair<ll,ll>>cv;
    ll count[26];
    memset(count,0,sizeof(count));
    vector<ll>vl;
    char ch[101][101];
    char ch1;
    list<ll>lc;
    cin>>t;
    while(t--)
    {
        vector<ll>v;
        ll array[1001];
        sum=0;
        f=0;
        ans=0;
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>array[i];
            if(array[i]==2048)
            {
                f=1;
            }
            if(array[i]<=2048)
            {
                v.push_back(array[i]);
            }
        }
        sort(v.begin(),v.end());
        for(i=0;i<v.size();i++)
        {
            sum+=v[i];
        }
        if(sum>=2048)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
}
