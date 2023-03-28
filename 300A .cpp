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
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    ll a,b,sum[200000+10],i,m,n,A=-1,B,C,D,ans=0,E,cst,c,cd,d,j,k,x0,t;
    vector<ll>lzero,zero,gzero,anz;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a;
        if(a>0)
        {
            gzero.push_back(a);
        }
        if(a<0)
        {
            lzero.push_back(a);
        }
        if(a==0)
        {
            zero.push_back(a);
        }
    }
    if(gzero.size()==0)
    {
        for(i=0; i<2; i++)
        {
            gzero.push_back(lzero.back()),lzero.pop_back();
        }
    }
    if(lzero.size()%2==0)
    {
        zero.push_back(lzero.back());
        lzero.pop_back();
    }
    cout<<lzero.size()<<" ";
    for(i=0; i<lzero.size(); i++)
        cout<<lzero[i]<<" ";
    cout<<endl;
    cout<<gzero.size()<<" ";
    for(i=0; i<gzero.size(); i++)
        cout<<gzero[i]<<" ";
    cout<<endl;
    cout<<zero.size()<<" ";
    for(i=0; i<zero.size(); i++)
        cout<<zero[i]<<" ";
    cout<<endl;






}
