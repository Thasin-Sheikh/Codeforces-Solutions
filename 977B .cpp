
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,a,i,j,p,k,f=0,cnt,mh,res,b,c,sum=0,ar,alex,array[200000+10],flag[200000+10],p3,point;
    long long int lfirst,sec,third,mfirst,p2;
    vector<pair<long long int,long long int>>vec;
    char ch [101][101];
    string str,ans;
    cin>>n;
    cin>>str;

    for(i=0;i<str.length();i++)
    {
        cnt=0;
            for(j=0;j<str.length();j++)
            {
                if(str[i]==str[j]&&str[j+1]==str[i+1])
                {
                  cnt++;
                }
            }
            if(cnt>f)
            {
                f=cnt;
                ans=string(1,str[i])+string(1,str[i+1]);
            }

    }
  cout<<ans<<endl;


}
