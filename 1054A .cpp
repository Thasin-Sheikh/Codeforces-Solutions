#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,a,b,c,d,d1,lift,sum=0,stair,array[100000+10],cnt=0,ans=INT_MIN,i,j,x,y,z,t1,t2,t3;
    string str,ptr;
    char ch;
    cin>>x>>y>>z>>t1>>t2>>t3;
    d=abs(x-y);
    stair=d*t1;
    d1=abs(x-z)+d;
    lift=(d1*t2)+3*t3;
    //cout<<lift<<" "<<stair<<endl;
    if(lift<=stair)
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;



}
