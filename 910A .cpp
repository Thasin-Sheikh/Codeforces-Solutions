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
ll n;
bool lili[10001];
string str;
ll value( ll in,ll m)
{
    ll i,j,ans,c=0;
    vector<ll>v;
    for(i=in+1; i<n; i++)
    {
        if(str[i]=='1')
        {
            v.push_back(i);
        }
        c++;
        if(c==m)
            break;
    }
    sort(v.begin(),v.end());
    if(v.size()==0)
    return -1;
    return v[v.size()-1];
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    ll i,j,m,k,t;
    memset(lili,false,sizeof(lili));
    cin>>n>>m;
    cin>>str;
    ll rr=0;
    ll c=0;
    while(rr<n-1)
    {
        rr=value(rr,m);
        if(rr==-1){
            cout<<-1<<endl;
        return 0;}
        //cout<<rr<<endl;
        c++;
    }
    cout<<c<<endl;

    return 0;
}


