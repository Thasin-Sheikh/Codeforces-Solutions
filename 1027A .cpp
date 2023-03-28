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
ll a[100000],n,k;
int main()
{
    makefast__
    string ptr,str,uni;
    ll candy=0,move=0,m,eat=0,l,t,i,j,barry[100000+10],f,a,b;
    vector<pair<ll,ll>>cv;
    ll count[1001];
    vector<string>sv;
    memset(count,0,sizeof(count));
    vector<ll>vl;
    char ch[101][101];
    char ch1;
    cin>>t;
    while(t--)
    {
        a=1;
        cin>>n;
        cin>>str;
        for(i=0;i<n;i++)
        {
            f=abs(str[i]-str[n-i-1]);
                if(f>2||f%2==1)
                {
                    a=0;
                    break;
                }
        }
        if(a==0)
        {
            cout<<"NO"<<endl;
        }
        else cout<<"YES"<<endl;
    }

}
