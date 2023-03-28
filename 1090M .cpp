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
ll aarray[100000+10];
char magic[1][100000];
const int N = 2e5 + 10;
int main()
{
    makefast__
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    ll n,a,b,ans=INT_MIN,i,j,k;
    cin>>n>>k;
    for(i=1;i<=n;i++)
    {
        cin>>aarray[i];
    }
    aarray[n+1]=aarray[n];
    a=aarray[1];
    ll cnt=0;
    cnt++;
    for(i=2;i<=n+1;i++)
    {
        if(aarray[i]!=a)
        {
            cnt++;
            a=aarray[i];
        }
        else
        {
            ans=max(ans,cnt);
            cnt=0;
            cnt+=1;
            a=aarray[i];
        }
        //cout<<ans<<" ";
    }
    //cout<<ans<<endl;
    if(ans==INT_MIN)
        cout<<1<<endl;
    else
    cout<<ans<<endl;


}
