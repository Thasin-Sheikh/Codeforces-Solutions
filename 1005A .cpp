#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,n,m,i,j,p,t,k=2,array[100000+10],ar[100000],q,sum1=0,cnt=0,sum=INT_MIN;
    long long int st,ct,qt;
    string str,ptr,sp[5000];
    set<pair<string,string>>vecs;
    vector<long long int >veci;
    stack<long long int>stck;
    cin>>n;
    array[n]=0;
    for(i=0; i<n; i++)
    {
        cin>>array[i];
    }
    for(i=1; i<=n; i++)
    {
        if(array[i]>array[i-1])
            continue;
        else
        {
            veci.push_back(array[i-1]);
            cnt++;
            //cout<<cnt<<endl;
        }
    }
    cout<<cnt<<endl;
    for(i=0; i<veci.size(); i++)
        cout<<veci[i]<<" ";
    cout<<endl;

    return 0;
}

