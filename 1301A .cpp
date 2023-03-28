#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d,n,m,i,j,p,t,k,array[100000+10],ar[100000],q,sum1=0,cnt,sum=INT_MIN,flag;
    long long int st,ct,qt;
    string str,ptr,sp;
    set<pair<long long int,long long int>>vecs;
    vector<long long int>vecc;
    stack<long long int>stck;
    cin>>t;
    while(t--)
    {
        cin>>str>>ptr>>sp;
        cnt=0;
        flag=0;
        for(i=0; i<str.length(); i++)
        {
            if(str[i]!=sp[i]&&sp[i]!=ptr[i])
            {
               flag=1;
                break;

            }
        }
           if(!flag)
                cout<<"YES"<<endl;
            else cout<<"NO"<<endl;

    }

    return 0;
}

