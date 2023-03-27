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
ll aarray[300000+10];
char magic[1][100000];
const int N = 2e5 + 10;
int main()
{
    makefast__
    string str,ptr;
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    ll n,a,b,ans=0,i,l=0,A,B,C,D,E,cst,c,cd,d,j,k,x0,R,G;
    ll r,g;
    vector<ll>v;
    cin>>r>>g>>b;
    while(r>0||g>0||b>0)
    {
        if(r>0)
        {
            r=r-2;
            R=l+30;
            v.push_back(R);
        }
        l++;
        if(g>0)
        {
            g=g-2;
            G=l+30;
            v.push_back(G);
        }
        l++;
        if(b>0)
        {
            b=b-2;
            B=l+30;
            v.push_back(B);
        }
        l++;
        //cout<<l<<" ";
    }
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());

    cout<<v[0]<<endl;

}
