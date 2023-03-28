/***By the name of Allah***/
///**Author Thasin Sheikh**///
#include<bits/stdc++.h>
using namespace std;
long long int po[1005][10];
vector<int>primes;
#define MAX 35000
#define makefast__  ios_base::sync_with_stdio(false);
using ll=long long ;
using dl =long double;
int main()
{
    makefast__
    ll time,bus,a,b,n,i,m,s,t,bust[100000+10],after[100000+10];
    cin>>bus>>time;
    vector<pair<ll,ll>>bp;
    ll ma=INT_MAX;
    for(i=0; i<bus; i++)
    {
        cin>>bust[i]>>after[i];
    }
    for(i=0;i<bus;i++)
    {
        ll p=bust[i];
        while(p<time)
        {
            p=p+after[i];
        }
        bp.push_back(make_pair(p,i+1));
    }
    sort(bp.begin(),bp.end());
    auto it =bp.begin();
    cout<<it->second<<endl;

}
