///*Bismillahir Rahmanir Rahim***///
///**Author Thasin Sheikh**///
/*    #include <regex>
    ...
    std::string string("hello $name");
    string = std::regex_replace(string, std::regex("\\$name"), "Somename");
    */
/*while(a)
    {
        if(a%2==0)
            dvi.push_back(0);
        else
            dvi.push_back(1);
        a/=2;
    }
    reverse(dvi.begin(),dvi.end());*/
#include<bits/stdc++.h>
using namespace std;
vector<int>primes;
#define MAX 35000
#define makefast__  ios_base::sync_with_stdio(false);
using ll=long long int  ;
using dl =double;
bool fk[100000];
ll aarray[100000+10];
char magic[1][100000];
const int N = 2e5 + 10;
int main()
{
    makefast__
    string str,ptr;
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    ll n,a,b,ans=0,i,A=0,B,C,D,E,cst,c,cd,d,j,k,x0,t;
    vector<ll>v;
    set<ll>sl;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>aarray[i];
        sl.insert(aarray[i]);

    }
    if(sl.size()<=2)
    {
        cout<<-1<<" "<<-1<<" "<<-1<<endl;
        return 0;
    }
    for(auto it=sl.begin();it!=sl.end();it++)
    {
        for(i=0;i<n;i++)
        {
            if(aarray[i]==*it)
            {
                cout<<i+1<<" ";
                ans++;
                break;
            }
        }
        if(ans==3)
            return 0;
    }

}
