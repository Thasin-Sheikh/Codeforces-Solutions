#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,dp[2001],n,m,i,j,array[100000+10],p,q,sum=0,cnt1=0,cnt,cnt2=0,cnt3=0,flag=1;
    long long int st,ct,qt;
    string str,ptr;
    vector<pair<long long int,long long int>> veci;
    vector<char>vecc;
    vector<string>vecs;
    queue<long long int>vecq;
    cin>>n;
    for(i=1; i<=n-1; i++)
    {
        sum=sum+(n-i)*i;
    }
        cout<<sum+n<<endl;



}
