#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int j,n,m,po,no,flag=0,cnt=0,cnt2=0,ans=0,ar[100000],x,y;
    int i;
    string str[1000],ptr,sr,tr,rtr,rt;
    vector<long long int>v;
    set<string>s;
    queue<long long int>qu;
    set<string>::iterator it;
    cin>>n>>sr;
    s.insert(sr);
    for(i=0; i<n; i++)
        cin>>str[i];

    if(n%2==0)
        cout<<"home"<<endl;
    else
        cout<<"contest"<<endl;
}
