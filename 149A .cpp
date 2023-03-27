#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d,n,m,i,j,array[100000+10],p,q,sum=0,cnt1=0,cnt=0,cnt2=0,cnt3=0,flag=1,ans,s=0;
    long long int st,ct,qt;
    string str,ptr;
    vector<pair<long long int,long long int>> veci;
    vector<char>vecc;
    vector<string>vecs;
    cin>>n;
    for(i=0; i<12; i++)
    {
        cin>>array[i];
        sum=sum+array[i];
    }
    sort(array,array+12);
    for(i=11; i>=0; i--)
    {
        if(array[i]!=0)
        {
            s=s+array[i];
            cnt++;
        }
        if(s>=n)
            break;
    }
    //cout<<cnt<<endl;
    if(sum<n)
        cout<<-1<<endl;
    else if(n==0)
        cout<<0<<endl;
    else cout<<cnt<<endl;


}
