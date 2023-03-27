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
    string ptr,str,ps;
    ll n,i,j,p,w,ans,a;
    char ch,ch1,ch2;
    vector<pair<string,string>>cs;
    vector<string>v;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>ptr>>str;
        cs.push_back(make_pair(ptr,str));

    }
    for(auto it=cs.begin(); it!=cs.end(); it++)
    {
        if(it->second=="rat")
            v.push_back(it->first);

    }
    for(auto it=cs.begin(); it!=cs.end(); it++)
    {
        if(it->second=="woman"||it->second=="child")
            v.push_back(it->first);

    }
    for(auto it=cs.begin(); it!=cs.end(); it++)
    {
        if(it->second=="man")
            v.push_back(it->first);

    }
    for(auto it=cs.begin(); it!=cs.end(); it++)
    {
        if(it->second=="captain")
        {
            v.push_back(it->first);
            break;
        }

    }
    for(i=0;i<v.size();i++)
        cout<<v[i]<<endl;






}
