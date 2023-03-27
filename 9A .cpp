#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,yellow,blue,i,red,l,d,y,sum1,b,r,sum,t,ans=INT_MIN,dif,array[100000+10],f,p=1,minn,a,c=0,flag;
    char pixel [110][110];
    vector<long long int>v,vec;
    bool prime[1000007];
    list<char>ptr;
    cin>>n>>m;
    switch(max(n,m))
    {
    case 1:
        cout<<"1/1"<<endl;
        break;
    case 2:
        cout<<"5/6"<<endl;
        break;
    case 3:
        cout<<"2/3"<<endl;
        break;
    case 4:
        cout<<"1/2"<<endl;
        break;
    case 5:
        cout<<"1/3"<<endl;
        break;
    case 6:
        cout<<"1/6"<<endl;
        break;

    }
}
