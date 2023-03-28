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
vector<ll>add;
bool ok[1000001];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str,s;
    ll i,j,n,m,k,t;
    for(i=1;;i++)
    {
        k=i*i;
        add.push_back(k);
        if(k>=2e9)
        {
            break;
        }
    }
    cin>>str;
    for(i=add.size()-1;i>=0;i--)
    {
        ostringstream ss;
        ss<<add[i];
        s=ss.str();
        if(s.size()>str.size())
        {
            continue;
        }
        ll l=0;
        for(j=0;j<str.length();j++)
        {
            if(str[j]==s[l])
            {
                l++;
            }
        }
        if(l==s.size())
        {
            cout<<str.length()-s.length()<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;

    return 0;
}



