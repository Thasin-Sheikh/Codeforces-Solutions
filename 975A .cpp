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
#include <bits/stdc++.h>
using namespace std;
int main()
{
    makefast__
    string ptr,str,ps,ans;
    ll n,i,j;
    char ch,ch1,ch2;
    set<string>cs;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>ptr;
        sort(ptr.begin(),ptr.end());
        auto res=unique(ptr.begin(),ptr.end());
        str=string(ptr.begin(),res);
        cs.insert(str);
    }
    cout<<cs.size()<<endl;





}

