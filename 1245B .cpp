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
    ll i,j,n,m,k,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll r,p,s;
        cin>>r>>p>>s;
        cin>>str;
        ll rc=0,pc=0,sc=0;
        for(i=0; i<str.length(); i++)
        {
            if(str[i]=='R')
                rc++;
            else if(str[i]=='P')
                pc++;
            else if(str[i]=='S')
                sc++;

        }
        ll ans=0;
        ans+=min(p,rc);
        ans+=min(s,pc);
        ans+=min(r,sc);
        ll lagbe;
        lagbe=n/2;
        if(n%2)
            lagbe++;
        if(ans>=lagbe)
        {
            cout<<"YES"<<endl;
            string ss;
            for(i=0; i<str.length(); i++)
            {
                if(str[i]=='R'&&p)
                {
                    ss+='P';
                    p--;
                }
                else if(str[i]=='P'&&s)
                {
                    ss+='S';
                    s--;
                }
                else if(str[i]=='S'&&r)
                {
                    ss+='R';
                    r--;
                }
                else ss+='1';
            }
            for(i=0;i<ss.length();i++)
            {
                if(ss[i]=='1')
                {
                    if(str[i]=='R')
                    {
                        if(s)
                        {
                            ss[i]='S';
                            s--;
                        }
                        else
                        {
                            ss[i]='R';
                            r--;
                        }
                    }
                    else if(str[i]=='S')
                    {
                        if(p)
                        {
                            ss[i]='P';
                            p--;
                        }
                        else if(s)
                        {
                            ss[i]='S';
                            s--;
                        }

                    }
                    else
                    {
                        if(r)
                        {
                            ss[i]='R';
                            r--;
                        }
                        else
                        {
                            ss[i]='P';
                            p--;
                        }
                    }
                }
            }
             cout<<ss<<endl;
        }
    else cout<<"NO"<<endl;
    }

    return 0;
}


