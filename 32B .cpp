#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,yellow,blue,i,red,l,d,y,sum1,b,r,sum,t,ans=0,dif,array[100000+10],f,p=1,minn,a,c=0,flag;
    char pixel [110][110];
    vector<long long int>v,vec;
    bool prime[1000007];
    list<char>ptr;
    string str;
    cin>>str;
    for(i=0; i<str.length();)
    {
        if(str[i]=='.')
        {
            vec.push_back(0);
            i++;
        }
        if(str[i]=='-'&&str[i+1]=='.')
        {

            vec.push_back(1);
            i+=2;
        }
        if(str[i]=='-'&&str[i+1]=='-')
        {

            vec.push_back(2);
            i+=2;
        }

    }
    for(i=0; i<vec.size(); i++)
        cout<<vec[i];
    cout<<endl;


}
