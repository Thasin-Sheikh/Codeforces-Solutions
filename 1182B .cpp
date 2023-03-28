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
char ch[510][510];
vector<ll>primes;
bool prime[1000001];
ll row[100000+10];
ll col[100000+10];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str[100000+10],scopy[100000+10];
    ll i,j,n,m,k,t;
    cin>>n>>m;
    for(i=0; i<n; i++)
        cin>>str[i];
    ll tot=0;
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            if(str[i][j]=='*')
            {
                tot++;
            }
        }
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            if(str[i][j]=='*')
            {
                ll cc=1,c=0;
                for(k=j-1; k>=0; k--)
                {
                    if(str[i][k]=='*')
                    {
                        c++;
                    }
                    else break;
                }
                if(c==0)
                {
                    continue;
                }
                cc+=c;
                c=0;
                for(k=j+1; k<m; k++)
                {
                    if(str[i][k]=='*')
                        c++;
                    else break;
                }
                if(c==0)
                    continue;
                cc+=c;
                c=0;
                for(k=i-1; k>=0; k--)
                {
                    if(str[k][j]=='*')
                        c++;
                    else break;
                }
                if(!c)
                {
                    continue;
                }
                cc+=c;
                c=0;
                for(k=i+1; k<n; k++)
                {
                    if(str[k][j]=='*')
                        c++;
                    else break;
                }
                if(!c)
                    continue;
                cc+=c;
                if(cc==tot)
                {
                    cout<<"YES"<<endl;
                    return 0;
                }
            }
        }
    }
    cout<<"NO"<<endl;
    return 0;
}



