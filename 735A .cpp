#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d,n,m,i,j,p,t,k,array[100000+10],ar[100000],q,sum1=0,cnt,sum=INT_MIN,flag=0,ans,f=0;
    long long int st,ct,qt;
    string str,ptr,sp[5000];
    set<pair<long long int,long long int>>vecs;
    vector<long long int>vi;
    stack<long long int>stck;
    char ch1;
    cin>>n>>m;
    cin>>str;
    for(i=0; i<str.length(); i++)
    {
        if(str[i]=='G')
        {
            for(j=i+m; j<str.length(); j+=m)
            {
                if(str[j]=='T')
                {
                    //flag=1;
                    cout<<"YES"<<endl;
                    return 0;
                }
                else if(str[j]=='#')
                {
                    //flag=1;
                    cout<<"NO"<<endl;
                    return 0;
                }
            }
        }
        else if(str[i]=='T')
        {
            for(j=i+m; j<str.length(); j+=m)
            {
                if(str[j]=='G')
                {
                    //flag=1;
                    cout<<"YES"<<endl;
                    return 0;
                }
                else if(str[j]=='#')
                {
                    //flag=1;
                    cout<<"NO"<<endl;
                    return 0;
                }
            }
        }

    }
    cout<<"NO"<<endl;
}
