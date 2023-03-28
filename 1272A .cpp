#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,yellow,blue,i,red,l,d,y,sum1,b,r,sum,t,ans=INT_MIN,dif,array[100000+10],f,p=1,minn,a,c=0,flag;
    char pixel [110][110];
    vector<long long int>v,vec;
    bool prime[1000007];
    list<char>ptr;
    string str;
    char ch,ph;
    cin>>t;
    while(t--)
    {
        sum=0;
        sum1=0;
        flag=1;
        cin>>a>>b>>c;
        array[0]=a;
        array[1]=b;
        array[2]=c;
        sort(array,array+3);
        a= array[0];
        b=array[1];
        c=array[2];
        if(a==b&&b==c)
        {
            cout<<0<<endl;
            flag=0;
        }
        else if(a==b&&a!=c&&abs(a-c)<=1)
        {
            c--;
        }
        else if(a==b&&a!=c&&abs(b-c)>1)
        {
            a++;
            b++;
            c--;
        }
        else if(b==c&&a!=b&&abs(b-a)>1)
        {
            a++;
            b--;
            c--;
        }
        else if(b==c&&a!=b&&abs(b-a)<=1)
        {
            a++;
        }
        else
        {
            c--;
            a++;
        }

        sum=abs(a-c)+abs(a-b)+abs(b-c);
        if(flag)
            cout<<sum<<endl;
    }


}
