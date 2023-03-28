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
ll aarray[100000+10];
char magic[1][100000];
const int N = 2e5 + 10;
int main()
{
    makefast__
    string str,ptr;
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    ll n,a,b,ans[100000+10],i,m,A,B,C,D,E,cst,c,cd,d,j,k,x0,t;
    vector<ll>v;
    vector<ll>ar,ba,ca;
    ll ccount[100000+10];
    cin>>n>>m;
    memset(ccount,0,sizeof(ccount));
    set<ll>sl;
    for(i=1; i<=n; i++)
    {
        cin>>aarray[i];
        sl.insert(aarray[i]);
    }
    ans[0]=0;
    ans[1]=sl.size();
    ans[n]=1;
    cd=n-1;
    ccount[aarray[n]]=1;
    for(i=n-1; i>1; i--)
    {
        set<ll>ss;
        for(j=i; j<=cd; j++)
        {
            if(ccount[aarray[j]]==0)
            {
                ss.insert(aarray[j]);
                ccount[aarray[j]]=1;
            }
        }
        ans[i]+=ans[i+1]+ss.size();
        //cout<<cd<<endl;
        cd--;
    }
while(m--)
{
    cin>>A;
    cout<<ans[A]<<endl;
}

}
