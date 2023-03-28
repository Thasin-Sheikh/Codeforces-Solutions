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
        string s1="",s2="";
        cin>>n;
        cin>>str;
        s1+='1';
        s2+='1';
        ll c=0;
        for(i=1; i<str.length(); i++)
        {
            if(str[i]=='0')
            {
                s1+='0';
                s2+='0';
            }
            else if(str[i]=='1'&&c==0)
            {
                s1+='1';
                s2+='0';
                c=1;
            }
            else if(str[i]=='2'&&c==0)
            {
                s1+='1';
                s2+='1';
            }
            else
            {
                s2+=str[i];
                s1+='0';
            }

        }
        cout<<s1<<endl;
        cout<<s2<<endl;

    }

    return 0;
}


