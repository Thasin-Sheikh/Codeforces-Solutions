///*Bismillahir Rahmanir Rahim***///
///**Author Thasin Sheikh**///
/*while(a)
    {
        if(a%2==0)
            dvi.push_back(0);
        else
            dvi.push_back(1);
        a/=2;
    }
    reverse(dvi.begin(),dvi.end());*/
#include<bits/stdc++.h>
using namespace std;
#define MAX 35000
#define makefast__  ios_base::sync_with_stdio(false);
using ll=long long int  ;
using dl =double;
const int N = 2e5 + 10;
ll aarray[200000+10];
ll magic[101][101];
vector<ll>primes;
bool fk[1000001];
int main()
{
    makefast__
    long long int n,i,cnt,d=0,flag=0,j=0,money,days,a,ar[100000+100],p[100000];
    vector<long long int >s,vec;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a;
        vec.push_back(a);

    }
    sort(vec.begin(),vec.end());
    cin>>days;
    vector<ll>ans;
    for(i=0; i<days; i++)
    {
        cin>>ar[i];
        money=upper_bound(vec.begin(),vec.end(),ar[i])-vec.begin();
        ans.push_back(money);
    }
    for(i=0;i<ans.size();i++)
        cout<<ans[i]<<endl;


}
