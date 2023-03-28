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
map<char,ll>mp1,mp2,mp3,mp4;
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,k,t;
    ll a=0,b=0,c=0,d=0;
    cin>>str;
    stack<char>st;
    ll ans=0;
    for(i=0; i<str.length(); i++)
    {
        if(st.size()==0)
        {
            st.push(str[i]);
            continue;
        }
        else if(str[i]=='['||str[i]=='{'||str[i]=='('||str[i]=='<')
        {
            st.push(str[i]);
        }
        else
        {
            char ch=st.top();
            if(ch=='['&&str[i]==']')
            {
                st.pop();
            }
            else if(ch=='('&&str[i]==')')
            {
                st.pop();
            }
            else if(ch=='{'&&str[i]=='}')
            {
                st.pop();
            }
            else if(ch=='<'&&str[i]=='>')
            {
                st.pop();
            }
            else if(ch==']'||ch=='}'||ch=='>'||ch==')')
            {
                cout<<"Impossible"<<endl;
                return 0;
            }
            else
            {
                ans++;
                st.pop();
            }
        }
    }
    if(st.size()!=0)
    {
        cout<<"Impossible"<<endl;
        return 0;
    }
    cout<<ans<<endl;

    return 0;
}



