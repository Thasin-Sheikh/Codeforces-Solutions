
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,yellow,ans1=0,j,blue,i,red,l,bl,cnt,d,y,sum1,b,r,sum,t,ans,dif,array[100000+10],f,p,minn,a,c=0,e,flag;
    char pixel [110][110];
    vector<long long int>v,vec;
    bool prime[1000007];
    memset(prime,true,sizeof(prime));
    list<char>ptr;
    string str;
    cin>>n;
    cin>>str;
    for(i=0; i<str.length();)
    {
        if((str[i]=='R'&&str[i+1]=='U')||(str[i]=='U'&&str[i+1]=='R'))
        {
            c++;
            i+=2;
        }
        else i++;
    }
    //cout<<c<<endl;
    cout<<str.length()-c<<endl;


}
