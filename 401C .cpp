///*Bismillahir Rahmanir Rahim***///
/***Stay_Home_Stay_Safe***/
///**Author Thasin Sheikh**///
#include<bits/stdc++.h>
using namespace std;
#define MAX 1e6+10
#define MOD 1000000007
#define PI 3.14159265359
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
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll a,b,c,d,e,f,x,y,k,t,q,p,A=0,mod,B=0,L,j,i,l,r,m,n,C=0,ans=0,sum=0,sum1=0;
    vector<ll>v,v1;
    queue<ll>qu;
    ll zero,one;
    cin>>zero>>one;
    f=one;
    ll f1=zero;
    string s2,s1;//string s2,s1;
    x=zero*2;
    x+=2;
    if(one>x)
    {
        cout<<-1<<endl;
        return 0;
    }
    if(zero>one+1)
    {
        cout<<-1<<endl;
        return 0;
    }
    if(one==zero)
    {
        for(i=0;i<one;i++)
        {
            cout<<10;
        }
        cout<<endl;
        return 0;
    }
    if(one>zero)
    {
        ll sam=zero;
        while(zero)
        {
            s1+='1';
            s1+='0';
            one--;
            zero--;
        }
        ll ex=one-zero;
        for(i=0;i<s1.length();i++)
        {
            if(s1[i]=='1'&&ex)
            {
                s2+='1';
                s2+='1';
                ex--;
            }
            else
            {
                s2+=s1[i];
            }
        }
        ll cd=2*sam;
        if(f>cd)
        {
            ll vd=f-cd;
            if(vd>2)
            {
                cout<<-1<<endl;
                return 0;
            }
            while(vd)
            {
                s2+='1';
                vd--;
            }
        }
        cout<<s2<<endl;

    }
    else
    {
        for(i=0;i<one;i++)
        {
            s1+='0';
            s1+='1';
        }
        ll ex=zero-one;
        if(ex==1)
        {
            s1+='0';
        }
        else
        {
            cout<<-1<<endl;
        }
        cout<<s1<<endl;

    }

    return 0;
}


