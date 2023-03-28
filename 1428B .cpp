
///*Bismillahir Rahmanir Rahim***///
/***Stay_Home_Stay_Safe***/
///**Author Thasin Sheikh**///
#include<bits/stdc++.h>
using namespace std;
#define MAX 1e6+10
#define MOD 1000000007
#define PI 3.14159265359
#define makefast__  ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using ll=long long int  ;
using dl =double;
using ull=unsigned long long;
const int N = 3e5 + 10;
ll aarray[N];
ll magic[505][505];
vector<ll>primes;
bool ok[1000001];
ll p1[N],p2[N];
ll a1[N],a2[N];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,k,t,a,b,c,d;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>str;
        for(i=0;i<=n+5;i++)
        {
            a1[i]=a2[i]=0;
        }
        for(i=0; i<str.length(); i++)
        {
            if(str[i]=='-')
            {
                a1[i+1]++;
                a2[i+1]++;
            }
            else
            {
                if(str[i]=='>')
                {
                    a1[i+1]++;
                }
                else
                {
                    a2[i+1]++;
                }
            }
        }
        ll len=str.length();
        for(i=1;i<=len;i++)
        {
            a1[i]+=a1[i-1];
            a2[i]+=a2[i-1];
        }
        /*for(i=1;i<=len;i++)
        {
            cout<<a1[i]<<" "<<a2[i]<<endl;
        }*/
        ll ans=0;
        for(i=0;i<str.length();i++)
        {
            if(str[i]=='-')
            {
                ans++;
            }
            else
            {
                if(i==0||i==len-1)
                {
                    if(str[i]=='<')
                    {
                        a=a2[len];
                    }
                    else
                    {
                        a=a1[len];
                    }
                    if(i==0&&str[len-1]=='-')
                    {
                        ans++;
                    }
                   else  if(i==len-1&&str[i-1]=='-')
                        ans++;
                    else if(a==n)
                    {
                        ans++;
                    }
                }
                else
                {
                  if(str[i]=='>')
                  {
                      a=a1[len]-a1[i+1];
                      a+=a1[i];
                      if(a==len-1)
                      {
                          ans++;
                      }
                      else if(str[i-1]=='-')
                        ans++;
                  }
                  else
                  {
                      a=a2[len]-a2[i+1];
                      a+=a2[i];
                      if(a==len-1)
                      {
                          ans++;
                      }
                      else if(str[i-1]=='-')
                        ans++;
                  }

                }
            }
        }
        cout<<ans<<endl;

    }

    return 0;
}
