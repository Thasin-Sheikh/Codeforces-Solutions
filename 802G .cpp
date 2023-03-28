
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int   a,b,c,d,m,n,p,t,k,array[100000+10],q,sum1=0,cnt,sum=0,flag,ans,f,l;
    long long int ct,qt,i,j;
    double arr[100000];
    string str,ptr,sp[5000],st;
    set<pair<long long int,long long int>>vecs;
    vector<long long int>vi(100000,0);
    stack<long long int>stck;
    vector<char>vc;
    set<char>sc;
    cin>>str;
    cnt=1;
    for(i=0; i<str.length(); i++)
    {
        if(str[i]=='h'&&cnt==1)
        {
            ptr+=str[i];
            cnt++;
        }
        if(str[i]=='e'&&cnt==2)
        {
            ptr+=str[i];
            cnt++;

        }
        if(str[i]=='i'&&cnt==3)
        {
            ptr+=str[i];
            cnt++;

        }
        if(str[i]=='d'&&cnt==4)
        {
            ptr+=str[i];
            cnt++;

        }
        if(str[i]=='i'&&cnt==5)
        {
            ptr+=str[i];
            cnt++;

        }

    }
    if(ptr=="heidi")
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
