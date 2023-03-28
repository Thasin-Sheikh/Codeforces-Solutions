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
    string str,ans,ss,pp;
    ll i,j,n,m,k,t=0;
    cin>>str;
    string s="CODEFORCES";
    k=0;
    ll c=0;
    if(str.length()<10)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    string s1,s2,s3;
    for(i=0;i<10;i++)
    {
        s1+=str[i];
    }
    if(s1==s)
    {
        cout<<"YES"<<endl;
        return 0;
    }
    ll kk=10;
    for(i=str.length()-1;i>=0;i--)
    {
        s2+=str[i];
        kk--;
        if(kk==0)
        {
            break;
        }
    }
    reverse(s2.begin(),s2.end());
    if(s2==s)
    {
        cout<<"YES"<<endl;
        return 0;
    }
    for(i=0;i<str.length();i++)
    {
        if(str[i]==s[k])
        {
            k++;
            ans+=str[i];
            ss=ans;
            m=10-ss.length();
            for(j=str.length()-1;j>=0;j--)
            {
                pp+=str[j];
                m--;
                if(m==0)
                {
                    break;
                }
            }
            reverse(pp.begin(),pp.end());
            ss+=pp;
            pp.clear();
            if(ss==s)
            {
                cout<<"YES"<<endl;
                return 0;
            }
        }
        else break;
    }
    cout<<"NO"<<endl;


    return 0;
}



