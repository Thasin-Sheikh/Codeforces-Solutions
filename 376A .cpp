#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll n,m,s,a,b,f,sum=0,sum1=0,i,j,l;
    string str;
    cin>>str;
    for(i=0; i<str.length(); i++)
    {
        if(str[i]=='^')
            f=i;
    }
    l=1;
    for(i=f-1; i>=0; i--)
    {
        if(str[i]=='1'||str[i]=='2'||str[i]=='3'||str[i]=='4'||str[i]=='5'||str[i]=='6'||str[i]=='7'||str[i]=='8'||str[i]=='9')
        {
            sum=sum+((l)*(str[i]-'0'));
        }
        l++;
    }
    l=1;
    for(i=f+1; i<str.length(); i++)
    {
        if(str[i]=='1'||str[i]=='2'||str[i]=='3'||str[i]=='4'||str[i]=='5'||str[i]=='6'||str[i]=='7'||str[i]=='8'||str[i]=='9')
        {
            sum1=sum1+((l)*(str[i]-'0'));
        }
        l++;
    }
    //cout<<sum<<" "<<sum1<<endl;
    if(sum>sum1)
        cout<<"left"<<endl;
    else if(sum<sum1)
        cout<<"right"<<endl;
    else cout<<"balance"<<endl;

}
