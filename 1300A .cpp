#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,n,m,i,j,p,t,k=2,array[100000+10],ar[100000],q,sum1=0,cnt,sum;
    long long int st,ct,qt;
    string str,ptr,sp[5000];
    set<pair<string,string>>vecs;
    vector<char>vecc;
    stack<long long int>stck;
    cin>>t;
    while(t--)
    {
        cnt=0,sum=0;
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>array[i];
            if(array[i]==0)
            {
                array[i]=1;
                cnt++;
            }
            sum=sum+array[i];
        }
        //cout<<sum<<endl;
        if(sum==0)
            cnt++;
        cout<<cnt<<endl;
    }
    return 0;
}

