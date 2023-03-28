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
bool ok[1001];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,k,t;
    memset(ok,false,sizeof(ok));
    ll dhur[20]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,4,9,25,49};
    ll c=0;
    for(i=0;i<19;i++)
    {
        cout<<dhur[i]<<endl;
        cin>>str;
        if(str=="yes")
        {
            ok[i]=true;
            c++;
        }
    }
    if(ok[15]||ok[16]||ok[17]||ok[18])
    {
        cout<<"composite"<<endl;
        fflush(stdout);
    }
    if(c<=1)
    {
        cout<<"prime"<<endl;
        fflush(stdout);
    }
    cout<<"composite"<<endl;
    fflush(stdout);

    return 0;
}


