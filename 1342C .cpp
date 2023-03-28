///*Bismillahir Rahmanir Rahim***///
///**Author Thasin Sheikh**///
/*    #include <regex>
    ...
    std::string string("hello $name");
    string = std::regex_replace(string, std::regex("\\$name"), "Somename");
    */
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
ll vi[40000+10];
ll  a,b;
set<char>sc;
ll  remaider( ll n)
{
    return 1LL* vi[a*b-1]*(n/(a*b))+vi[n%(a*b)];
}
int main()
{
    makefast__
    string ptr,str,uni;
    ll m1,m2,m3,m4,i,j,m5,l,r,ta,t,ans,fa,tb,fb,sum,tower,floor,q,left[100000+10],right[100000+10];
    ll w1,w2,w3,w4,w5;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>q;
        for(i=0; i<a*b; i++)
        {
            if(i==0)
                vi[i]=0;
            else
            {
                int va=((i%a)%b);
                int vb=((i%b)%a);
                vi[i]=vi[i-1];
                if(va!=vb)
                    vi[i]++;
            }
        }
        while(q--)
        {
            cin>>l>>r;
            if(a==b)
            {
                cout<<0<<endl;
            }
            else cout<< remaider(r)-remaider(l-1)<<endl;
        }

    }


}
