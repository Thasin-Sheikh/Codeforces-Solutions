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
    dl i,j,n,m,k,t;
    dl hour,minute;
    char ch;
    cin>>n>>ch>>m;
    if(n>=12)
        n-=12;
    dl mm =m/60;
    hour=n*30+(mm*30);
    minute=m/5*30;
    cout<<hour<<" "<<minute<<endl;



        return 0;
}


