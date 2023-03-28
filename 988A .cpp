#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d,n,m,g,i=1,j,p,t,k,f,array[100000+10],ar[100000],sum1=0,cnt=0,sum=INT_MIN,flag,ans;
    long long int st,ct,qt;
    string str,ptr,sp[5000];
    set<long long int>vecs,s;
    vector<long long int>vecc;
    stack<long long int>stck;
    queue<long long int>q;
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
        cin>>array[i];
        vecs.insert(array[i]);
    }
    if(vecs.size()<m)
        cout<<"NO"<<endl;
    else
    {
        cout<<"YES"<<endl;
        for(auto it=vecs.begin();it!=vecs.end();it++)
        {
            for(i=1;i<=n;i++)
            {
                if(*it==array[i]){
                    s.insert(i);
                    break;}
            }
        }
    }
    for(auto it=s.begin();it!=s.end();it++)
    {
        cout<<*it<<" ";
        cnt++;
        if(cnt==m)
            break;
    }
    cout<<endl;

}
