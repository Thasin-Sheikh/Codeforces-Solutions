#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int j,n,m,po,no,flag,cnt,cnt2,ans=0,ar[100000],x,y,i,co[100000];
    string str[1000],ptr,sr,tr,rtr,rt;
    vector<long long int>v(100000,0);
    set<string>s;
    queue<long long int>qu;
    set<string>::iterator it;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>ar[i];
    }
    for(i=1; i<=100000; i++)
    {
        for(j=2; j<=sqrt(i); j++)
        {
            if(i%j==0)
            {
                flag=0;
                break;
            }
        }
        if(flag!=0)
            co[i]=1;
    }
    for(i=0; i<n; i++)
    {
        if(sqrt(ar[i])==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}


