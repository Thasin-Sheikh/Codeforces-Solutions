#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c=0,n,m,i,j,p,t,k=2,array[200000+10],ar[100000],q,sum1=0,cnt=0,sum=INT_MIN,flag;
    long long int st,ct,qt;
    string str,ptr,sp[5000];
    char ch,ph;
    set<pair<long long int,long long int>>vecs;
    vector<long long int>vecc;
    stack<long long int>stck;
    cin>>n>>m;
    cin>>str;
    for(i=1;i<=m;i++)
    {
        cin>>a>>b>>ch>>ph;
        for(j=a-1;j<b;j++)
        {
            if(str[j]==ch)
                str[j]=ph;
        }
    }
   cout<<str<<endl;

}
