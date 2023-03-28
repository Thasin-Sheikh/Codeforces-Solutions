#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d,n,m,i,j,array[100000+10],p,q,sum=0,cnt1=0,cnt,cnt2=0,cnt3=0,flag=1;
    long long int st,ct,qt;
    string str,ptr;
    vector<pair<long long int,long long int>> veci;
    vector<char>vecc;
    vector<string>vecs;
    queue<long long int>vecq;
    cin>>n>>a>>b>>c>>d;
    sum=sum+n+a+b+c+d;
    if(sum==0)
        cout<<-1<<endl;
    else if(sum%5==0)
        cout<<sum/5<<endl;
    else cout<<-1<<endl;


}
