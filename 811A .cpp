#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d,n,m,i,j,p,t,k,array[100000+10],ar[100000],q,sum1=0,cnt=1,sum=INT_MIN,flag=0,ans,f=0;
    long long int st,ct,qt;
    string str,ptr,sp[5000];
    set<pair<long long int,long long int>>vecs;
    vector<long long int>vi;
    stack<long long int>stck;
    char ch1;
    cin>>n>>m;
    while(1)
    {
        if(n<cnt)
        {
            cout<<"Vladik"<<endl;
            return 0;
        }
        else
        {
            n=n-cnt;
            cnt++;
        }
        if(m<cnt)
        {
            cout<<"Valera"<<endl;
            return 0;

        }
        else
        {
            m=m-cnt;
            cnt++;
        }
    }


}
