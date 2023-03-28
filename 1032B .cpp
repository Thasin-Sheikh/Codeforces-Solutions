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
    cin>>str;
    n=str.length();
    if(n<=20)
    {
        cout<<1<<" "<<n<<endl;
        cout<<str<<endl;
        return 0;
    }
    ll row,col,f=0;
    for(i=1; i<=5; i++)
    {
        for(j=1;j<=20;j++)
        {
            if(i*j>=n)
            {
                row=i,col=j;
                f=1;
                break;
            }
        }
        if(f)
            break;
    }
    ll besi=(row*col)-n;
    string ans="";
    for(i=0;i<str.length();i++)
    {
        ans+=str[i];
        if((i+2)%col==0&&besi)
        {
            ans+='*';
            besi--;
        }
    }
    cout<<row<<" "<<col<<endl;
    for(i=0;i<ans.length();i++)
    {
        cout<<ans[i];
        if((i+1)%col==0)
            cout<<endl;
    }
    return 0;
}


