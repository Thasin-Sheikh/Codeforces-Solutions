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
char magic[101][101];
vector<ll>primes;
bool prime[1000001];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll a,b,c,d,e,f,x,y,k,t,A=0,mod,B=0,L,j,i,l,r,m,n,C=0,ans=0,sum=0,sum1=0;
    vector<ll>v,v1;
    queue<ll>qu;
    for(i=0; i<101; i++)
    {
        for(j=0; j<101; j++)
        {
            magic[i][j]='a';
        }
    }
    char ch;
    cin>>n>>m>>ch;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            cin>>magic[i][j];
        }
    }
    set<char>sl;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            if(magic[i][j]==ch)
            {
                char c1,c2,c3,c4;
                c1=magic[i][j+1];
                c2=magic[i][j-1];
                c3=magic[i-1][j];
                c4=magic[i+1][j];
                if(c1>=65&&c1<=90&&c1!=ch)
                    sl.insert(c1);
                if(c2>=65&&c2<=90&&c2!=ch)
                    sl.insert(c2);
                if(c3>=65&&c3<=90&&c3!=ch)
                    sl.insert(c3);
                if(c4>=65&&c4<=90&&c4!=ch)
                    sl.insert(c4);

            }
        }
    }
    cout<<sl.size()<<endl;

    return 0;
}

