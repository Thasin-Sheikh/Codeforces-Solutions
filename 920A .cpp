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
int main()
{
    makefast__
    string ptr,str;
    int m1,m2,m3,m4,i,j,n,k,m5,m,ta,t,flag,g,nmpo=INT_MAX,hariken=INT_MAX;
    ll w1,w2,w3,w4,w5;
    vector<ll>dvi;
    bool primes[1000007];
    memset(primes,true,sizeof(primes));
    primes[0]=primes[1]=false;
    set<ll>sl;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d", &n, &k);
        int l = 0, r;
        int z = 0;
        for ( i = 0; i < k; i++)
        {
            scanf("%d", &r);
            if (l == 0)
            {
                z = max(z, r);
            }
            else
            {
                z = max(z,((r - l)/2) + 1);
            }
            l = r;
        }
        z=max(z,(n-l+1));
        printf("%d\n",z);
    }
}

