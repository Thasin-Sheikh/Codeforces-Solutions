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
    vector<string>v;
    char ch[1001];
    t=6;
    while(gets(ch))
    {
        v.push_back(ch);
    }
    ll msize=0;
    for(i=0; i<v.size(); i++)
    {
        msize=max(msize,ll(v[i].size()));
    }
    msize+=2;
    //cout<<msize<<endl;
    for(i=0; i<msize; i++)
        cout<<"*";
    cout<<endl;
    ll c=1;
    for(i=0; i<v.size(); i++)
    {
        ll len=ll(v[i].size());
        ll kk=msize-2-len;
        ll pre,pro;
        ll dv=kk/2;
        //cout<<kk<<endl;
        if(kk%2!=0)
        {
            if(c%2)
            {
                pre=dv;
                pro=kk-pre;
                c++;
            }
            else
            {
                pro=dv;
                pre=kk-pro;
                c++;
            }
        }
        else
        {
            pre=pro=dv;
        }
        cout<<"*";
        for(j=0; j<pre; j++)
        {
            cout<<" ";
        }
        cout<<v[i];
        for(j=0; j<pro; j++)
            cout<<" ";
        cout<<"*"<<endl;
    }
    for(i=0; i<msize; i++)
        cout<<"*";
    cout<<endl;

    return 0;
}


