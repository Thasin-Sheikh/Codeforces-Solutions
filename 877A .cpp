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
#include<regex>
using namespace std;
vector<int>primes;
#define MAX 35000
#define makefast__  ios_base::sync_with_stdio(false);
using ll=long long int  ;
using dl =double;
bool fk[100000];
const int N = 2e5 + 10;
ll aarray[100000+10];
ll magic[101][101];
int main()
{
    makefast__
    string str;
    string pptr;
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    ll a,b,sum[200000+10],i,m,n,A,B,C,D,ans=0,E,cst,c,cd,d,j,k,x0,t;
    vector<ll>lzero,zero,gzero,anz;
    ll l1,r1,l2,r2;
    cin>>str;
    if(str.find("Danil")!=str.npos)
    {
        ans++;
        str.replace(str.find("Danil"),sizeof("Danil")-1,"B");

    }
    if(str.find("Olya")!=str.npos)
    {
        ans++;
        str.replace(str.find("Olya"),sizeof("Olya")-1,"B");

    }
    if(str.find("Slava")!=str.npos)
    {
        ans++;
        str.replace(str.find("Slava"),sizeof("Slava")-1,"B");

    }
    if(str.find("Ann")!=str.npos)
    {
        ans++;
        str.replace(str.find("Ann"),sizeof("Ann")-1,"B");

    }
    if(str.find("Nikita")!=str.npos)
    {
        ans++;
        str.replace(str.find("Nikita"),sizeof("Nikita")-1,"B");

    }
    if(str.find("Danil")!=str.npos)
    {
        ans++;
        str.replace(str.find("Danil"),sizeof("Danil")-1,"B");

    }
    if(str.find("Olya")!=str.npos)
    {
        ans++;
        str.replace(str.find("Olya"),sizeof("Olya")-1,"B");

    }
    if(str.find("Slava")!=str.npos)
    {
        ans++;
        str.replace(str.find("Slava"),sizeof("Slava")-1,"B");

    }
    if(str.find("Ann")!=str.npos)
    {
        ans++;
        str.replace(str.find("Ann"),sizeof("Ann")-1,"B");

    }
    if(str.find("Nikita")!=str.npos)
    {
        ans++;
        str.replace(str.find("Nikita"),sizeof("Nikita")-1,"B");

    }
    if(ans==1)
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;



}
