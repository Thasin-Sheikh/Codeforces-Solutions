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
ll ans[1000][100];
bool prime[1000001];

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str[1101],s1,s2;
    ll i,j,n,m,k,t;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>n>>str[i];
        for(j=1; j<=n; j++)
        {
            cin>>s1;
            set<char>cs;
            if(s1[0]==s1[1]&&s1[1]==s1[3]&&s1[3]==s1[4]&&s1[4]==s1[6]&&s1[6]==s1[7])
            {
                ans[i][0]++;
            }
            else if(s1[0]>s1[1]&&s1[1]>s1[3]&&s1[3]>s1[4]&&s1[4]>s1[6]&&s1[6]>s1[7])
            {
                ans[i][1]++;
            }
            else ans[i][2]++;
            cs.clear();
        }
    }
    //cout<<ans[4][1]<<endl;
    vector<string> girl,taxy,pizza;
    ll tpre=0,ppre=0,gpre=0;
    for(j=1; j<=t; j++)
    {
        if(ans[j][0]>tpre)
        {
            tpre=ans[j][0];
        }
        if(ans[j][1]>ppre)
        {
            ppre=ans[j][1];
        }
        if(ans[j][2]>gpre)
        {
            gpre=ans[j][2];
        }
    }
    //cout<<tpre<<" "<<ppre<<" "<<gpre<<endl;
    for(j=1; j<=t; j++)
    {
        if(ans[j][0]==tpre)
        {
            taxy.push_back(str[j]);
        }
        if(ans[j][1]==ppre)
            pizza.push_back(str[j]);
        if(ans[j][2]==gpre)
            girl.push_back(str[j]);
    }
    reverse(taxy.begin(),taxy.end());
    reverse(pizza.begin(),pizza.end());
    reverse(girl.begin(),girl.end());
    cout<<"If you want to call a taxi, you should call:"<<" ";
    while(!taxy.empty())
    {
        cout<<taxy.back();
        taxy.pop_back();
        if(taxy.size()>=1)
            cout<<", ";
    }
    cout<<"."<<endl;
    cout<<"If you want to order a pizza, you should call:"<<" ";
    while(!pizza.empty())
    {
        cout<<pizza.back();
        pizza.pop_back();
        if(pizza.size()>=1)
            cout<<", ";
    }
    cout<<"."<<endl;
    cout<<"If you want to go to a cafe with a wonderful girl, you should call:"<<" ";
    while(!girl.empty())
    {
        cout<<girl.back();
        girl.pop_back();
        if(girl.size()>=1)
            cout<<", ";
    }
    cout<<"."<<endl;
    return 0;
}


