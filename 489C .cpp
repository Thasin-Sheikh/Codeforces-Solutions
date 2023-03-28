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
    ll i,j,n,m,k,t,sum,len;
    cin>>len>>sum;
    if(sum==0)
    {
        if(len==1)
        {
            cout<<0<<" "<<0<<endl;
        }
        else cout<<-1<<" "<<-1<<endl;
        return 0;
    }
    vector<ll>v,v1;
    for(i=1; i<=len; i++)
    {
        k=min(9LL,sum);
        v.push_back(k);
        sum-=k;
    }
    if(sum)
    {
        cout<<-1<<" "<<-1<<endl;
        return 0;
    }
    v1=v;
    reverse(v1.begin(),v1.end());
    if(v1[0]==0)
    {
        v1[0]=1;
        for(i=1; i<v1.size(); i++)
        {
            if(v1[i]>0)
            {
                v1[i]-=1;
                break;
            }
        }
    }
    for(i=0; i<v1.size(); i++)
        cout<<v1[i];
    cout<<" ";
    for(i=0; i<v.size(); i++)
        cout<<v[i];
    cout<<endl;






    return 0;
}


