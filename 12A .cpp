#include<bits/stdc++.h>
using namespace std;
int main()
{
    int   a,b,c=0,d=0,m,n,p,t=0,k=0,array[100000+10],q,sum1=0,cnt=1,sum,flag,ans,f=0,l;
    long long int st,ct,qt,i,j;
    double arr[100000];
    string str,ptr,sp[5000];
    set<pair<long long int,long long int>>vecs;
    vector<long long int>vi(100000,0);
    stack<long long int>stck;
    vector<char>vc;
    set<char>sc;
    char cha[100][100];
    for(i=1; i<=3; i++)
    {
        for(j=1; j<=3; j++)
        {
            cin>>cha[i][j];
        }
    }
    if(cha[1][1]!=cha[3][3])
    {
        cout<<"NO"<<endl;
        return 0;
    }
    else if(cha[1][2]!=cha[3][2])
    {
        cout<<"NO"<<endl;
        return 0;
    }
    else if(cha[1][3]!=cha[3][1])
    {
        cout<<"NO"<<endl;
        return 0;
    }
    else if(cha[2][1]!=cha[2][3])
    {
        cout<<"NO"<<endl;
        return 0;
    }
    else cout<<"YES"<<endl;

    return 0;
}
