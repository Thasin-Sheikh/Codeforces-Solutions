
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d,n,m,i,j,p,t,k,array[100000+10],ar[100000],q,sum1=0,cnt,sum,flag;
    long long int st,ct,qt;
    string str,ptr,sp[5000];
    set<pair<long long int,long long int>>vecs;
    vector<long long int>vecc;
    stack<long long int>stck;
    cin>>t;
    while(t--)
    {
        cin>>n>>str;
        sum=0;
        a=str.length();
        for(i=str.length()-1; i>=0; i--)
        {
            if(str[i]=='A')
            {
                sum=max(sum,a-i);
                a=i;

            }
        }
        if(sum==0)
            cout<<0<<endl;
        else
        cout<<sum-1<<endl;

    }


    return 0;
}
