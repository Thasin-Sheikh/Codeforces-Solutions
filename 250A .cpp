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
#define MAX 35000
#define makefast__  ios_base::sync_with_stdio(false);
using ll=long long int  ;
using dl =double;
bool fk[100000];
ll aarray[300000+10];
char magic[1][100000];
const int N = 2e5 + 10;
bool primes[1000000];
int main()
{
    makefast__
    string str,ptr;
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    ll n,a,b,i,l=0,m,A,B,C,D,E,cst,sum=0,c,cd,d,j,k,x0,R,G;
    ll r,g;
    vector<ll>v;
    v.push_back(0);
    cin>>n;
    ll cnt=0;
    for(i=1; i<=n; i++)
    {
        cin>>aarray[i];
    }
    k=0;
    for(i=1; i<=n; i++)
    {
        l++;
        if(aarray[i]<0)
            cnt++;
        if(cnt==2)
        {
            v.push_back(l);
            l=0;
            cnt=0;
        }
        //cout<<l<<" "<<endl;

    }
    //cout<<cnt<<endl;
    for(i=0; i<v.size(); i++)
        sum+=v[i];
    if(sum<n)
    {
        ll nb=n-sum;
        if(cnt==1)
            v.push_back(nb);
            else
                v.back()+=nb;
    }
    vector<ll>ans;
    for(i=0; i<v.size(); i++)
    {
        if(v[i]!=0)
        {
            ans.push_back(v[i]);
        }
    }
    cout<<ans.size()<<endl;
    for(i=0; i<ans.size(); i++)
        cout<<ans[i]<<" ";




}
