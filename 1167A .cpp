#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,n,m,i,j,p,t,k=2,array[100000+10],ar[100000],q,sum1=0,cnt=0,sum=INT_MIN,ans,flag;
    long long int st,ct,qt;
    string str,ptr,sp[5000];
    set<pair<string,string>>vecs;
    vector<char>vecc;
    stack<long long int>stck;
    cin>>t;
    while(t--)
    {
        flag=0;
        cin>>n>>str;
        for(i=0; i<str.length(); i++)
        {
            if(str[i]=='8')
            {
                flag=1;
                ans=i;
                break;
            }
        }
        //cout<<ans<<endl;
        if(flag&&str.length()-ans>=11)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }


    return 0;
}

