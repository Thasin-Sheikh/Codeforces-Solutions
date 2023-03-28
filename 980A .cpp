///*BY The Name Of ALLAH***///
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
    string str,ptr,ps[1001],s[1001];
    ll n,m,a,j,k,i,p=0,l=0;
    cin>>str;
    for(i=0; i<str.length(); i++)
    {
        if(str[i]=='-')
            p++;
        else  l++;
    }
    if(l==0)
        cout<<"YES"<<endl;
    else if(p==0)
    {
        cout<<"YES"<<endl;
    }
    else if(p%l==0)
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}
