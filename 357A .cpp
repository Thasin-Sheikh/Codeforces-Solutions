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
    reverse(dvi.begin(),dvi.end());
    for(i=0;i<dvi.size();i++)
        cout<<dvi[i];*/
#include<bits/stdc++.h>
using namespace std;
vector<int>primes;
#define MAX 35000
#define makefast__  ios_base::sync_with_stdio(false);
using ll=long long int  ;
using dl =double;
ll aarray[100000+10];
ll magic[501][501];
ll ar[200000+10];
int main()
{
    makefast__
    string ptr,str;
    ll m1,m2,m3,m4,i,j,x,y,n,k,m5,m,ta,t,flag=0,ans=0,sum=0;
    ll w1,w2,w3,w4,w5;
    vector<ll>dvi,cvi;
    set<ll>sc;
    cin>>m;
    for(i=1; i<=m; i++)
    {
        cin>>aarray[i];
        sum+=aarray[i];
    }
    cin>>x>>y;
    for(i=1; i<=m; i++)
    {
        flag+=aarray[i];
        if((flag>=x&&flag<=y)&&((sum-flag)>=x&&(sum-flag)<=y))
        {
            cout<<i+1<<endl;
            return 0;
        }
        //cout<<flag<<endl;
    }
    cout<<0<<endl;


}
