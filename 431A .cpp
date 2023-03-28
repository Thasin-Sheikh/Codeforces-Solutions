#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,cnt=0,ans=0,d,b,c,flag=0,j=0,money,days,a,ar[100000+100],p[100000];
    vector<long long int >vec;
    string s,s1;
    cin>>a>>b>>c>>d;
    cin>>s;
    for(i=0; i<s.length(); i++)
    {
        if(s[i]=='1')
            cnt=cnt+a;
        else if(s[i]=='2')
            cnt=cnt+b;
        else if(s[i]=='3')
            cnt=cnt+c;
        else
            cnt=cnt+d;

    }
    cout<<cnt<<endl;


}
