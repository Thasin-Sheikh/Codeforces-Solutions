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
    string ptr,str,ps;
    char ch,ch1,ch2;
    ll n,flag,op=0,array[100000+10],i,j;
    cin>>str;
    ptr=str;
    reverse(ptr.begin(),ptr.end());
    if(str==ptr)
    {
        cout<<"YES"<<endl;
        return 0;
    }
    for(i=str.length()-1; i>=0; i--)
    {
        if(str[i]=='0')
            op++;
        else
            break;
    }
//cout<<op<<endl;
    op=str.length()-op;
    str.erase(op,str.length());
//cout<<str<<endl;
    ptr=str;
    reverse(ptr.begin(),ptr.end());
    if(ptr==str)
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}
