
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
    ll a,b,c,d,e,f,x=0,y,k,t,A=0,B=0,L,j,i,l=0,r=0,m,n,C=0,ans=0,sum=0,sum1=0;
    vector<ll>v,v1;
    queue<ll>qu;
    cin>>n;
    cin>>str;
    str+='(';
    str+=')';
    for(i=0;i<str.length();i++)
    {
        if(str[i]=='(')
            r++;
        else l++;
    }
    if(r!=l)
    {
        cout<<-1<<endl;
        return 0;
    }
    L=0;
    for(i=0;i<str.length();i++)
    {
       if(str[i]=='(')
       {
           L+=1;

       }
       else L--;
       if(str[i]==')'&&L<0)
        x+=2;

    }
    cout<<x<<endl;

    return 0;
}
