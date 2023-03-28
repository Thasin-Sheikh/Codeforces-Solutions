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
ll c1[30],c2[30];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str,s1,s2;
    ll i,j,n,m,k,t;
    cin>>n;
    cin>>s1>>s2;
    for(i=0; i<s1.length(); i++)
    {
        c1[s1[i]-97]++;
        c2[s2[i]-97]++;
    }
    for(i=0; i<26; i++)
    {
        if(c1[i]!=c2[i])
        {
            cout<<-1<<endl;
            return 0;
        }
    }
    if(s1==s2)
    {
        cout<<0<<endl;
        return 0;
    }
    vector<ll>ans;
    for(i=s1.length()-1;i>=0;i--)
    {
        if(s1[i]!=s2[i])
        {
            for(j=i-1;j>=0;j--)
            {
                if(s1[j]==s2[i])
                {
                    for(k=j;k<i;k++)
                    {
                        swap(s1[k],s1[k+1]);
                        ans.push_back(k+1);
                    }
                    break;

                }
            }
        }
    }
    cout<<ans.size()<<endl;
    for(auto c:ans)
        cout<<c<<" ";
    cout<<endl;
    return 0;
}


