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
ll aarray[100000+10];
char magic[1][100000];
const int N = 2e5 + 10;
int main()
{
    makefast__
    string ptr,str;
    ll m1,m2,m3,m4,i,j,x,b,p,y,n,k,m5,m,ta,t,flag=0,sum=0,ans=0;
    ll w1,w2,w3,w4,w5;
    ll ar[100000+10];
    vector<ll>dvi,cvi;
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    cin>>n>>k;
    for(i=0; i<n; i++)
    {
        cin>>aarray[i];
        ar[i]=aarray[i];
    }
    sort(ar,ar+n);
    w1=n-k;
    w2=ar[w1];
    ll cnt=0;
    for(i=n-1; i>=0; i--)
    {
        for(j=0; j<n; j++)
        {
            if(ar[i]==aarray[j])
            {
                aarray[j]=-1;
                break;
            }
        }
        cnt++;
        if(cnt==k)
            break;
    }
        cout<<w2<<endl;
        for(i=0;i<n;i++)
        {
            if(aarray[i]==-1)
                cout<<i+1<<" ";
        }
        cout<<endl;
}
