#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c=0,d=0,e=0,m,i,n,j,p,t=0,k,q,sum1=0,cnt=0,sum=0,flag,ans=INT_MAX,f=0,l,s=0;
    long long int st,ct,qt;
    string str,ptr,sp[5000];
    set<pair<long long int,long long int>>vecs;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>str;
    if(str.length()<5)
    {
        cout<<"Too weak"<<endl;
        return 0;
    }
    for(i=0; i<str.length(); i++)
    {
        if(str[i]>='a'&&str[i]<='z')
            s++;
        else if(str[i]>='A'&&str[i]<='Z')
            c++;
        else if(str[i]=='0'||str[i]=='1'||str[i]=='2'||str[i]=='3'||str[i]=='4'||str[i]=='5'||str[i]=='6'||str[i]=='7'||str[i]=='8'||str[i]=='9')
            d++;

    }
    if(s&&c&&d)
        cout<<"Correct"<<endl;
    else cout<<"Too weak"<<endl;

}
