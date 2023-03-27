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
    string str;
    ll a,c,d,e,f,x,y,t,k,b,A=0,B=0,L,j,i,l,r,n,C=0,sum=0,sum1=0;
    vector< pair<int,int>>v;
    vector<ll>ans(50,0);
    queue<ll>qu;
    cin>>n>>k;
    for(i=1; i<=n; i++)
    {
        cin>>a>>b;
        v.push_back(make_pair(50-a,b));

    }
    sort(v.begin(),v.end());
    auto it=v.begin();
    it+=k-1;
    x=it->first;
    y=it->second;
    for(auto it=v.begin(); it!=v.end(); it++)
    {
        if(it->first==x&&it->second==y)
        {
            A++;
        }
    }
    cout<<A<<endl;
    return 0;

}
/***Stay_Home_Stay_Safe***/
