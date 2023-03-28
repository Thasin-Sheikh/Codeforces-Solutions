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
    ll n,candy=0,move=0,m,eat=0,l,k,t,i,j,array[100000+10],barry[100000+10],f;
    vector<pair<ll,ll>>cv;
    ll count[1001];
    vector<string>sv;
    memset(count,0,sizeof(count));
    vector<ll>vl;
    char ch[101][101];
    char ch1;
    list<ll>lc;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll large=0;
        vector<ll>v1,v;
        f=0;
        l=0,k=0;
        for(i=0; i<n; i++)
        {
            cin>>array[i];
        }
        for(i=0; i<n; i++)
        {
            cin>>barry[i];
        }
        for(i=0; i<n; i++)
        {
            if(array[i]!=barry[i])
            {
                ll a=barry[i]-array[i];
                v.push_back(a);
                v1.push_back(i);
            }
            if(array[i]>barry[i])
            {
                large=1;
            }
        }
        if(v.size()==0)
        {
            cout<<"YES"<<endl;
        }
        else if(large)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            sort(v.begin(),v.end());
            if(v[0]!=v[v.size()-1])
            {
                cout<<"NO"<<endl;
                l=1;
            }
            else if(v[0]==v[v.size()-1])
            {
                for(i=1; i<v1.size(); i++)
                {
                    if(v1[i]!=v1[i-1]+1)
                    {
                        cout<<"NO"<<endl;
                        f=1;
                        break;
                    }
                }
            }
            if(f==0&&l==0)
            {
                cout<<"YES"<<endl;
            }

        }
    }


}
