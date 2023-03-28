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
const int N = 2e5 + 10;
ll aarray[N];
ll magic[505][505];
vector<ll>primes;
bool ok[1000001];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str,ans,s;
    ll i,j,n,m,k,t;
    cin>>str;
    dl a;
    for(i=0; i<str.length(); i++)
    {
        if(str[i]=='e')
        {
            n=i;
            for(j=i+1;j<str.length();j++)
            {
                s+=str[j];

            }
            break;
        }
    }
    stringstream ss(s);
    ss>>k;
    for(i=0;i<n;i++)
    {
        if(str[i]=='.')
        {
            for(j=i+1;j<n;j++)
            {
                if(k)
                {
                    ans+=str[j];
                    k--;
                }
                else break;
            }
            if(j<n)
            {
                ans+='.';
                for(;j<n;j++)
                {
                    ans+=str[j];
                }
            }
            if(k)
            {
                while(k--)
                {
                    ans+='0';
                }
            }
            break;
        }
        else ans+=str[i];

    }

    //cout<<ans<<endl;
    ll len=ans.length();
    for(i=0;i<ans.length();i++)
    {
        if(ans[i]=='.')
        {
            ll la=len-(i+1);
            if(i==len-2&&ans[i+1]=='0')
            {
                ans.pop_back();
                ans.pop_back();
            }
            break;
        }
    }
    cout<<ans<<endl;
    return 0;
}



