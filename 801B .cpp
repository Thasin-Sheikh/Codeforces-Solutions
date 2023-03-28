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
    ll n,m,a,j,k=1,i,b=0,p,bowl,plate;
    cin>>str>>ptr;
    if(str[0]=='a'&&ptr[0]!='a'){
        cout<<-1<<endl;
        return 0;}
    else if(str.length()==1&&ptr[0]>str[0]){
        cout<<-1<<endl;
        return 0;}
    for(i=0;i<str.length();i++)
    {
        if(ptr[i]>str[i])
        {
            cout<<-1<<endl;
            return 0;
        }
    }
    cout<<ptr<<endl;
}
