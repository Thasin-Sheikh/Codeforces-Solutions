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
    ll a,b,sum[200000+10],i,m,n,A=0,B,C,D,ans=0,E,cst,c,cd,d,j,k,x0,t;
    vector<ll>lzero,zero,gzero,anz;
    cin>>n>>pptr;
    a=k;
    ll count[100001];
    memset(count,0,sizeof(count));
   for(i=0;i<pptr.size();i++)
   {
       B=pptr[i]-'0';
       count[B]++;
       ans+=B;
   }
    if(ans>=n)
    {
        cout<<0<<endl;
        return 0;
    }
    B=n-ans;
    for(i=0; i<=9; i++)
    {
        if(count[i]>=1)
        {
            ll bal=count[i];
            while(bal--)
            {
                ans+=(9-i);
                A++;
                if(ans>=n)
                {
                    cout<<A<<endl;
                    return 0;
                }
            }
        }
        //else continue;


    }


}
