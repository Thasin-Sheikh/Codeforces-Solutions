#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,n,m,i,j,t,k=2,array[100000+10],ar[100000],q,sum,sum1=0,cnt1=0,cnt,cnt2=0,cnt3=0,flag=1,ans=0,s=0,v1,v2,d,l;
    long long int st,ct,qt;
    string str,ptr,sp[5000],p;
    set<pair<string,string>>vecs;
    vector<char>vecc;
    stack<long long int>stck;
    cin>>n;
    while(n--)
    {
        cnt=0;
        a=0,b=0;
        cin>>str;
        for(i=str.length()-1; i>=0; i--)
        {
            if(str[i]=='1')
            {
                a=i;
                break;
            }
        }
        for(i=0; i<str.length(); i++)
        {
            if(str[i]=='1')
            {
                b=i;
                break;
            }
        }
        //cout<<a<<" "<<b<<endl;
        if(b>0||a>0)
        {
            for(i=b+1; i<a; i++)
            {
                if(str[i]=='0')
                    cnt++;
            }
        }
        if(str=="0")
            cout<<0<<endl;
        else
            cout<<cnt<<endl;
    }


}
