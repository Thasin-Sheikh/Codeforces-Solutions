/*154|873|296
386|592|714
729|641|835
___________
863|725|149
975|314|628
412|968|357
___________
631|457|982
598|236|471
247|189|563

554|873|296
386|992|714
729|641|835
___________
833|725|149
975|344|628
412|968|377
___________
633|457|982
598|233|471
247|189|566*/

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
    string str[15];
    ll i,j,n,m,k,t;
    cin>>t;
    while(t--)
    {
        for(i=1;i<=9;i++)
        {
            cin>>str[i];
        }
        str[1][0]=str[1][1];
        str[2][3]=str[2][4];
        str[3][6]=str[3][7];
        str[4][1]=str[4][2];
        str[5][4]=str[5][5];
        str[6][7]=str[6][8];
        str[7][2]=str[7][1];
        str[8][5]=str[8][4];
        str[9][8]=str[9][7];
        for(i=1;i<=9;i++)
            cout<<str[i]<<endl;
    }
}
