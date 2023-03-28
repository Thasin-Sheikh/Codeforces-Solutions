#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,yellow,blue,i,red,l,d,y,b,r,sum=0,t,ans=INT_MIN,dif,array[100000+10],f,p=1,minn,a,c=0;
    char pixel [110][110];
    vector<long long int>v,vec;
    bool prime[1000007];
    list<char>ptr;
    string str;
    char ch,ph;
    cin>>n;
    cin>>str;
    if(n%2==0)
    {
        for(i=0; i<str.length(); i++)
        {
            if(i%2==0)
                ptr.push_front(str[i]);
            else
                ptr.push_back(str[i]);

        }
    }
    else
    {
        for(i=0; i<str.length(); i++)
        {
            if(i%2!=0)
                ptr.push_front(str[i]);
            else
                ptr.push_back(str[i]);

        }
    }

    while(!ptr.empty())
    {
        ch=ptr.front();
        cout<<ch;
        ptr.pop_front();
    }




}
