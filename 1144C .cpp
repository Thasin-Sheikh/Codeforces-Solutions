///*Bismillahir Rahmanir Rahim***///
///**Author Thasin Sheikh**///
/*    #include <regex>
    ...
    std::string string("hello $name");
    string = std::regex_replace(string, std::regex("\\$name"), "Somename");
    */
#include<bits/stdc++.h>
using namespace std;
vector<int>primes;
#define MAX 35000
#define makefast__  ios_base::sync_with_stdio(false);
using ll=long long int  ;
using dl =double;
ll magic[501][501];
int main()
{
    makefast__
    string ptr,str,uni;
    ll candy=0,bm,move=0,m,n,i,t,j,sum1,sum,a,b,r,s=0,rs,f,ans=0;
    set<ll>inc,dcr;
    vector<ll>v;
    ll count[200001];
    ll array[200001];
    memset(count,0,sizeof(count));
    set<char>sc;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>array[i];
        count[array[i]]++;
    }
    sort(array,array+n);
    for(i=0; i<n; i++)
    {
        if(count[array[i]]>2)
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    for(i=0; i<n; i++)
    {
        if(count[array[i]]==2)
        {
            inc.insert(array[i]);
            count[array[i]]--;
        }
    }
    for(i=n-1; i>=0; i--)
    {
        if(count[array[i]]==1)
            dcr.insert(array[i]);
    }
    cout<<"YES"<<endl;
    cout<<inc.size()<<endl;
    for(auto it=inc.begin(); it!=inc.end(); it++)
        cout<<*it<<" ";
    cout<<endl;
    cout<<dcr.size()<<endl;
    for(auto it=dcr.begin(); it!=dcr.end(); it++)
    {
        v.push_back(*it);
    }
    reverse(v.begin(),v.end());
    for(i=0; i<v.size(); i++)
        cout<<v[i]<<" ";
    cout<<endl;




}
