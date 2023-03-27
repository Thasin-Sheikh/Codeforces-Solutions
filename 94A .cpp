///*Bismillahir Rahmanir Rahim***///
///**Author Thasin Sheikh**///
#include<bits/stdc++.h>
using namespace std;
long long int po[1005][10];
vector<int>primes;
#define MAX 35000
#define makefast__  ios_base::sync_with_stdio(false);
using ll=long long int  ;
using dl =double;
int main()
{
    makefast__
    string ptr,str;
    ll n=8,i,j,p,w,ans,a;
    char ch,ch1,ch2;
    vector<pair<string,int>>sv;
    cin>>str;
    ll l=0;
    for(i=0;i<10;i++)
    {
        cin>>ptr;
        sv.push_back(make_pair(ptr,i));
    }
    while(n--)
    {
        string ps;
        for(i=l;i<10+l;i++)
        {
            ps+=str[i];
        }
        l=i;
        //cout<<l<<endl;
        for(auto  it=sv.begin();it!=sv.end();it++)
        {
            if(it->first==ps)
            {
                cout<<it->second;
            }
        }
    }




}
