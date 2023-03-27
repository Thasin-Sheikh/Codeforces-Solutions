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
bool ok[10001];
void seive()
{
    ll i,j,n,m;
    memset(ok,true,sizeof(ok));
    ok[0]=ok[1]=false;
    for(i=2; i<=1001; i++)
    {
        if(ok[i])
        {
            for(j=2*i; j<=1001; j+=i)
            {
                ok[j]=false;
            }
        }
    }
}
map<char,ll>mp;
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,k,t;
    cin>>str;
    if(str.length()<=3)
    {
        cout<<"YES"<<endl;
        cout<<str<<endl;
        return 0;
    }
    ll cnt[26]= {0};
    seive();
    char ans[1010],input[10001];
    for(i=0; i<str.length(); i++)
    {
        cnt[str[i]-'a']++;
        ans[i+1]='0';
        mp[str[i]]++;
        input[i+1]=str[i];
    }
    vector<ll>v;
    for(i=0; i<26; i++)
    {
        v.push_back(cnt[i]);
    }
    sort(v.begin(),v.end());
    ll len=str.length();
    for(i=2;i<=len;i++)
    {
        if(ok[i])
        {
            char ch='0';
            ll z=0;
            for(j=i;j<=len;j+=i)
            {
                if(ans[j]!='0')
                {
                    ch=ans[j];
                }
                if(ans[j]=='0')
                    z++;
            }
            ll pr=0;
            char cc;
            if(ch!='0')
            {
                k=mp[ch];
                if(mp[ch]<z)
                {
                    cout<<"NO"<<endl;
                    return 0;
                }
                else
                {
                    for(j=i;j<=len;j+=i)
                    {
                        ans[j]=ch;
                    }
                    mp[ch]-=z;
                }
            }
            else
            {
                for(ll p=0;p<26;p++)
                {
                    if(mp[char(p+97)]>pr)
                    {
                        pr=mp[char(p+97)];
                        cc=char(p+97);
                    }
                }
                if(pr<z)
                {
                    cout<<"NO"<<endl;
                    return 0;
                }
                mp[cc]-=z;
                for(j=i;j<=len;j+=i)
                {
                    ans[j]=cc;
                }
            }
        }
    }
    for(i=1;i<=len;i++)
    {
        if(ans[i]=='0')
        {
            for(j=0;j<26;j++)
            {
                if(mp[char(j+97)])
                {
                    ans[i]=char(j+97);
                    mp[char(j+97)]--;
                    break;
                }
            }
        }
    }
    cout<<"YES"<<endl;
    for(i=1;i<=len;i++)
        cout<<ans[i];
    cout<<endl;

    return 0;
}


