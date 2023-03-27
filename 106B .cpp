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
bool fk[1000];
ll aarray[100000+10];
char magic[1][100000];
const int N = 2e5 + 10;
int main()
{
    makefast__
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    ll n,a,b,ans=-1,i,cst,c,cd,d,j,k,speed[101],ram[101],hdd[101],cost[101];
    cin>>n;
    memset(fk,true,sizeof(fk));
    a=0,b=0,c=0,d=0,cst=INT_MAX;
    for(i=1; i<=n; i++)
    {
     cin>>speed[i]>>ram[i]>>hdd[i]>>cost[i];
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(speed[i]<speed[j]&&ram[i]<ram[j]&&hdd[i]<hdd[j])
            {
                fk[i]=false;
            }
        }
    }
    ll price;
    price=10000;

    for(i=1;i<=n;i++)
    {
        if(fk[i])
        {
            if(cost[i]<price)
            {
                ans=i;
                price=cost[i];
            }
        }
    }
    cout<<ans<<endl;
    return 0;

}
