#include<bits/stdc++.h>
using namespace std;
vector<int>primes;
#define MAX 35000
using ll=long long ;

int k[4]= {14,10,20,20};
int main()
{
    ll n=0,sum=0;
    string str;
    cin>>str;
    if(str.size()>0)
        n=str[str.size()-1]-'0';
    if(str.size()>1)
        n+=10*(str[str.size()-2]-'0');
    if(n==0)
    {
        cout<<4<<endl;
        return 0;
    }
    cout<<k[n%4]%5<<endl;

}
