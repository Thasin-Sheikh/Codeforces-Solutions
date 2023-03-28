#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d,n,m,i,j,p,t,k,array[100000+10],ar[100000],q,sum1=0,cnt=0,sum=INT_MIN,flag;
    long long int st,ct,qt;
    string str,ptr,sp[5000];
    set<pair<long long int,long long int>>vecs;
    vector<long long int>vi;
    stack<long long int>stck;
    char ch1;
    cin>>ch1>>a;
    if((a==1&&ch1=='a')||(a==1&&ch1=='h')||(a==8&&ch1=='a')||(a==8&&ch1=='h'))
        cout<<3<<endl;
    else if((a==1||a==8)&&(ch1!='a'||ch1!='h')||(ch1=='a'||ch1=='h')&&(a!=1||a!=8))
        cout<<5<<endl;
    else cout<<8<<endl;

}
