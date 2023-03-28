
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int   a,b,c,time,d,m,n,p,t,k,array[100000+10],q,sum1=0,cnt,sum=0,flag,ans,f,l;
    long long int ct,qt,i,j;
    double arr[100000];
    string str,ptr,sp[5000],st;
    set<pair<long long int,long long int>>vecs;
    vector<long long int>vi;
    stack<long long int>stck;
    vector<char>vc;
    char ch;
    set<char>sc;
    for(i=0; i<64; i++)
    {
        cin>>ch;
        if(ch>='A'&&ch<='Z')
        {
            if(ch=='Q')
                sum=sum+9;
            else if(ch=='R')
                sum=sum+5;
            else if(ch=='B')
                sum=sum+3;
            else if(ch=='N')
                sum+=3;
            else if(ch=='P')
                sum+=1;

        }
        else if(ch>='a'&&ch<='z')
        {
            if(ch=='q')
                sum1=sum1+9;
            else if(ch=='r')
                sum1=sum1+5;
            else if(ch=='b')
                sum1=sum1+3;
            else if(ch=='n')
                sum1+=3;
            else if(ch=='p')
                sum1+=1;
        }
    }
    if(sum>sum1)
        cout<<"White"<<endl;
    else if(sum<sum1)
        cout<<"Black"<<endl;
    else cout<<"Draw"<<endl;

}
