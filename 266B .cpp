#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,a,i,j,p,k,cnt,mh,res,ans=0,b,c,sum=0,ar,alex,array[30],p3,point;
    long long int lfirst,sec,third,mfirst,p2;
    vector<pair<long long int,long long int>>vec;
    char ch [101][101];
    string str;
    cin>>n>>m;
    cin>>str;
    while(m--)
    {
        for(i=0;i<str.length();)
        {
            if(str[i]=='B'&&str[i+1]=='G'){
                swap(str[i],str[i+1]);
                i+=2;}
                else i++;
        }
    }
  cout<<str<<endl;
}
