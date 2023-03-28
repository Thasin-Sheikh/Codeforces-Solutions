
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int   a,b,c,d,m,jor=0,bejr=0,n,p,t,k,array[100000+10],q,sum1=0,cnt,sum=0,flag,ans,f,l;
    long long int ct,qt,i,j;
    double arr[100000];
    string str,ptr,sp[5000],st;
    set<pair<long long int,long long int>>vecs;
    vector<long long int>vi;
    stack<long long int>stck;
    vector<char>vc;
    set<char>sc;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>array[i];
        if(array[i]%2==0)
        {
            sum=sum+array[i];

        }
        else
        {
            bejr++;
            vi.push_back(array[i]);
        }

    }
    if(n==1&&bejr==1)
    {
        cout<<0<<endl;
        return 0;
    }
    sort(vi.begin(),vi.end());
    reverse(vi.begin(),vi.end());
    d=vi.size();
    //cout<<d<<endl;
    if(d%2!=0)
        d--;
    for(i=0; i<d; i++)
    {
        sum=sum+vi[i];
    }
    cout<<sum<<endl;
}
