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
    ll a,b,sum[200000+10],i,m,n,A=-1,B,C,D,ans=0,E,cst,c,cd,d,j,k,x0,t;
    vector<ll>lzero,zero,gzero,anz;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        ans+=i;
    }
    if(n==1||n==2)
    {
        cout<<"No"<<endl;
    }
    else
    {
        cout<<"Yes"<<endl;
        cout<<1<<" ";
        for(i=1;i<=n;i++)
        {
            if(__gcd(i,(ans-i))!=1)
            {
                B=i;
                break;
            }
        }
        cout<<B<<endl;
        cout<<n-1<<" ";
        for(i=1;i<=n;i++)
        {
            if(i!=B)
                cout<<i<<" ";
        }
        cout<<endl;
    }

}
