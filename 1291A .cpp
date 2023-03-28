#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int   a,b,c=0,time,d=0,m,n,p=2,t,k=INT_MIN,array[200000+10],q,sum1=0,cnt,sum=0,ans=INT_MIN,an=INT_MIN,f,l;
    long long int ct,qt,i,j;
    double arr[100000];
    string str,ptr,sp[5000],st;
    set<pair<long long int,long long int>>vecs;
    vector<pair<long long int,long long int>>vi;
    stack<long long int>stck;
    vector<char>vc;
    set<char>sc;
    cin>>n;
    while(n--)
    {
        cin>>a;
        cin>>str;
        sum=0;
        cnt=0;
        string ntr;
        for(i=0; i<str.length(); i++)
        {
            int x;
            x=str[i]-'0';
            if(x%2!=0)
            {
                cnt++;
                ntr+=str[i];
            }
        }
        if(cnt<=1)
            cout<<-1<<endl;
        else cout<<ntr[0]<<ntr[1]<<endl;
    }

}
