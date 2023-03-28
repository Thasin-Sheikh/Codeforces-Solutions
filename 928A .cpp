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
    string str[10001],given;
    ll i,j,n,m,k,t;
    cin>>given;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>str[i];
    }
    for(i=1; i<=n; i++)
    {
        ll flag=0;
        if(str[i].length()!=given.length())
        {
            continue;
        }
        for(j=0; j<given.length(); j++)
        {
            char c1,c2;
            c1=tolower(str[i][j]);
            c2=tolower(given[j]);
            if(c1==c2)
            {
                flag++;
            }
            else if((c1=='0'&&c2=='o')||(c1=='o'&&c2=='0'))
            {
                flag++;
            }
            else if((given[j]=='1'&&str[i][j]=='l')||(str[i][j]=='1'&&given[j]=='l')||(given[j]=='1'&&str[i][j]=='I')||(str[i][j]=='1'&&given[j]=='I')||(given[j]=='1'&&str[i][j]=='L')||(str[i][j]=='1'&&given[j]=='L')||(given[j]=='1'&&str[i][j]=='i')||(str[i][j]=='1'&&given[j]=='i'))
                flag++;
            else if(c1=='i'&&c2=='l'||c1=='l'&&c2=='i')
                flag++;
            else break;
        }
        if(flag==given.length())
        {
            cout<<"NO"<<endl;
            return 0;

        }
    }
    cout<<"YES"<<endl;

    return 0;
}


