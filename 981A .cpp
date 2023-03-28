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
    string ptr,str,uni;
    ll n=8,i,j,p,w,ans,a;
    char ch,ch1,ch2;
    vector<pair<string,int>>sv;
    cin>>str;
    ptr=str;
    reverse(ptr.begin(),ptr.end());
    if(str!=ptr)
    {
        cout<<ptr.length()<<endl;
        return 0;
    }
    auto res=unique(str.begin(),str.end());
    uni=string(str.begin(),res);
    if(uni.size()==1)
    {
        cout<<0<<endl;
    }
    else
        cout<<str.length()-1<<endl;


}
