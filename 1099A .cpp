#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a=0,t1w,t1h,t2w,t2h,b,sweight,sheight,array[100000+10],ar[100000],q,sum1=0,cnt=0,sum=INT_MIN,flag,c=0;;
    long long int st,ct,qt;
    string str,ptr,sp[5000];
    set<pair<long long int,long long int>>vecs;
    vector<long long int>vecc;
    stack<long long int>stck;
    cin>>sweight>>sheight;
    cin>>t1w>>t1h;
    cin>>t2w>>t2h;
    a=sweight;
    while(1)
    {
        if(sheight==t1h)
        {
            a=a-t1w;
            c++;
        }
        if(sheight==t2h)
        {
            a=a-t2w;
            c++;
        }
        if(sheight==0)
            break;
        else
        {
            a+=sheight;
            sheight--;
        }
        if(a<0)
        {
            a=0;
        }

    }
    if(a<0)
        cout<<0<<endl;
    else
        cout<<a<<endl;
}
