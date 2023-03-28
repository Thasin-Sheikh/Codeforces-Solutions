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
vector<ll>B,W;
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str,black,white;
    ll i,j,n,m,k,t;
    vector<ll>v;
    cin>>n;
    cin>>str;
    black=str;
    white=str;
    for(i=0;i<black.size()-1;i++)
    {
        if(black[i]=='W')
        {
            B.push_back(i+1);
            black[i]='B';
            if(black[i+1]=='W')
                black[i+1]='B';
            else black[i+1]='W';
        }
    }
    for(i=0;i<white.size()-1;i++)
    {
        if(white[i]=='B')
        {
            W.push_back(i+1);
            white[i]='W';
            if(white[i+1]=='W')
                white[i+1]='B';
            else white[i+1]='W';
        }
    }
    ll f1=0,f2=0;
    for(i=0;i<black.size();i++)
    {
        if(black[i]=='W')
        {
            f1=1;
            break;
        }
    }
    if(!f1)
    {
        cout<<B.size()<<endl;
        for(auto c:B)
            cout<<c<<" ";
        cout<<endl;
        return 0;
    }
    for(i=0;i<white.size();i++)
    {
        if(white[i]=='B')
        {
            f2=1;
            break;
        }
    }
    if(!f2)
    {
        cout<<W.size()<<endl;
        for(auto c:W)
            cout<<c<<" ";
        cout<<endl;
        return 0;
    }
    cout<<-1<<endl;



    return 0;
}


