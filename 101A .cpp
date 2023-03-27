
///*Bismillahir Rahmanir Rahim***///
/***Stay_Home_Stay_Safe***/
///**Author Thasin Sheikh**///
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
const int N = 2e5 + 10;
ll aarray[200000+10];
ll magic[101][101];
vector<ll>primes;
bool prime[1000001];
int main()
{
    makefast__
    string str;
    ll a,b,c,d,e,f,x,y,t,k,A=0,B=0,L,j,i,l,r,m,n,C=0,sum=0,sum1=0;
    vector<ll>v,v1;
    queue<ll>qu;
    cin>>str;
    cin>>k;
    if(k>str.length())
    {
        cout<<0<<endl;
        return 0;
    }
    ll count[26];
    for(i=0; i<26; i++)
        count[i]=0;
    for(i=0; i<str.length(); i++)
        count[str[i]-'a']++;
    string ans;
    for(i=0; i<26; i++)
    {
        v.push_back(count[i]);
    }
    sort(v.begin(),v.end());
    ll g;
    for(i=0; i<v.size(); i++)
    {
        g=0;
        for(j=0; j<str.length(); j++)
        {
            if(count[str[j]-'a']==v[i])
            {
                ll df;
                df=min(k,count[str[j]-'a']);
                k-=df;
                count[str[j]-'a']-=df;
            }
            if(k==0)
            {
                g=1;
                break;
            }
        }
        if(g)
            break;
    }
    for(i=0; i<str.length(); i++)
    {
        if(count[str[i]-'a']>0)
        {
            ans+=str[i];
        }
    }
   set<char>sl;

   for(i=0;i<ans.size();i++)
   {
       sl.insert(ans[i]);
   }
   cout<<sl.size()<<endl;
    cout<<ans<<endl;
    return 0;
}
