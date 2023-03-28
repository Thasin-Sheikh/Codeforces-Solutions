#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,n,m,i,j,p,t,k=2,array[100000+10],ar[100000],q,cnt=0,sum,sum1,flag;
    long long int st,ct,qt;
    string str,ptr,sp[5000];
    set<pair<string,string>>vecs;
    vector<char>vecc;
    stack<long long int>stck;
    cin>>t;
    while(t--)
    {
        cin>>n>>a>>b;
        sum=0,sum1=0;
        for(i=0; i<a; i++)
        {
            cin>>c;
            if(c==n)
                flag=1;
        }
        for(i=0; i<b; i++)
        {
            cin>>c;
            if(c==n)
                flag=0;
        }
        if(flag)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }


    return 0;
}

