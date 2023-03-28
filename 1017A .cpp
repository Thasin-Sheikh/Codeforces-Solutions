#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,n,d,ans,m,i,j,p,t,k=2,array[100000+10],ar[100000],q,sum1=0,cnt=0,sum,s;
    long long int st,ct,qt;
    string str,ptr,sp[5000];
    set<pair<string,string>>vecs;
    vector<long long int >veci;
    stack<long long int>stck;
    cin>>n;
    cin>>a>>b>>c>>d;
    s=a+b+c+d;
    veci.push_back(s);
    for(i=1;i<n;i++)
    {
        cin>>a>>b>>c>>d;
        sum=a+b+c+d;
        veci.push_back(sum);

    }
  sort(veci.begin(),veci.end());
  reverse(veci.begin(),veci.end());
  for(i=0;i<veci.size();i++)
  {
      if(veci[i]==s)
      {
          ans=i;
          break;
      }
  }
  cout<<ans+1<<endl;

    return 0;
}

