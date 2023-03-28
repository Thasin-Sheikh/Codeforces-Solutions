/***By the name of Allah***/
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
    string str;
    ll i,j,m,n,l,t,s,x,p=0,cnt=1,mn;
    cin>>t;
    ll count[26];
    while(t--)
    {
        memset(count,0,sizeof(count));
        cin>>str;
        string ptr;
        ptr=str;
        reverse(ptr.begin(),ptr.end());
        for(i=0; i<str.length(); i++)
            count[str[i]-'a']++;
        sort(count,count+26);
        if(count[25]==str.length())
            cout<<-1<<endl;
        else if(str!=ptr)
        {
            cout<<str<<endl;
        }
        else
        {
            for(i=1; i<str.length(); i++)
                cout<<str[i];
            cout<<str[0]<<endl;
        }
    }

}
