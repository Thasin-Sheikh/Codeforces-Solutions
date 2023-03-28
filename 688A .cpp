
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,cn=0,d,n,m,i,j,p,t,k,array[100000+10],ar[100000],q,sum1=0,cnt=0,sum=INT_MIN,flag,ans=INT_MIN;
    long long int st,ct,qt;
    string str;
    set<pair<long long int,long long int>>vecs;
    vector<long long int>vecc;
    stack<long long int>stck;
    cin>>n>>m;
    for(i=0; i<m; i++)
    {
        flag=0;
        cin>>str;
        for(j=0; j<str.length(); j++)
        {
            if(str[j]=='0')
            {
                flag=1;
                break;
            }
        }
        if(flag)
        {
            cnt++;
        }
        if(flag==0||i==m-1)
        {
            vecc.push_back(cnt);
            cnt=0;
        }
//cout<<cnt<<endl;
    }
    sort(vecc.begin(),vecc.end());
  cout<<vecc[vecc.size()-1]<<endl;


    return 0;
}
