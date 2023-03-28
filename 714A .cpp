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
const int N = 2e5 + 10;
ll aarray[100000+10];
ll magic[101][101];
int main()
{
    makefast__
    vector<string>str;
    string pptr;
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    ll a,b,sum[200000+10],i,m,n,A,B,C,D,ans=0,E,cst,c,cd,d,j,k,x0,t;
    vector<ll>lzero,zero,gzero,anz;
    ll l1,r1,l2,r2;
    cin>>l1>>r1>>l2>>r2>>k;
    if(l2>r1)
    {
        cout<<0<<endl;
        return 0;
    }
    a=abs(r1-l2)+1;
    A=l2;
    if(r2<r1)
    {
        a-=r1-r2;
        B=r2;
    }
    else
    {
        B=r1;
    }
    if(l2<l1)
    {
        a-=l1-l2;
        A=l1;
    }
    if(k>=A&&k<=B)
        a--;
    if(a<0)
        cout<<0<<endl;
    else
        cout<<a<<endl;



}
