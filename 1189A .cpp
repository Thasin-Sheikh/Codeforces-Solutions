#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,cn=0,d,n,m,i,j,p,t,k,array[100000+10],ar[100000],q,sum1=0,cnt=0,sum=INT_MIN,flag;
    long long int st,ct,qt;
    string str,ptr,sp[5000];
    set<pair<long long int,long long int>>vecs;
    vector<long long int>vecc;
    stack<long long int>stck;
    cin>>n;
    cin>>str;
    for(i=0; i<str.length(); i++)
    {
        if(str[i]=='1')
        {
            cnt++;
        }
        else cn++;
    }
    if(cnt!=cn)
    {
        cout<<1<<endl;
        cout<<str<<endl;
    }
    else
    {
        cout<<2<<endl;
        for(i=0; i<str.length()-1; i++)
            cout<<str[i];
        cout<<" "<<str[str.length()-1]<<endl;
    }


    return 0;
}

