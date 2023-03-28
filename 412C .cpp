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
bool fk[1000001];
ll lcm(ll n,ll m)
{
    return (n*m)/(__gcd(n,m));
}
int main()
{
    makefast__
    string str[100001],ans;
    ll a,c,d,e,f,x,y,t,A=0,B=0,L,j,i,l,r,n,C=0,sum=0,sum1=0;
    vector<ll>v,v1;
    set<ll>sl;
    queue<ll>qu;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>str[i];
    }
    L=str[0].length();
    if(n==1)
    {
        for(i=0;i<L;i++)
        {
            if(str[0][i]=='?')
                cout<<'x';
            else
                 cout<<str[0][i];
        }
        cout<<endl;
        return 0;
    }
    for(i=0; i<L; i++)
    {
        set<char>ss;
        for(j=1; j<n; j++)
        {
            if(str[j][i]==str[j-1][i]&&str[j][i]=='?')
            {
                ss.insert('?');
            }
            else if(str[j][i]==str[j-1][i]&&str[j][i]!='?')
            {
                ss.insert(str[j][i]);
            }
            else
            {
                ss.insert(str[j][i]);
                ss.insert(str[j-1][i]);
            }
        }
        auto it=ss.begin();
        if(ss.size()==1&&*it=='?')
        {
            ans+='x';
        }
        else if(ss.size()==1&&*it!='?')
        {
            ans+=*it;
        }
        else if(ss.size()==2&&ss.find('?')!=ss.end())
        {
            auto it=ss.begin();
            auto jt=it;
            jt++;
            if(*it=='?')
                ans+=*jt;
            else
            ans+=*it;

        }
        else
            ans+='?';
    }
    cout<<ans<<endl;


}
