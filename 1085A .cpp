#include <bits/stdc++.h>
using namespace std;
vector<char>ans;
int main()
{

    string s;
    cin>>s;
    long long int n = s.size();
    long long int l,m,i;
    l=n-1;
    m=0;
  for(i=n;i>=1;i--)
  {
      if(i%2==0)
      {
          ans.push_back(s[l]);
          l--;
      }
      else
      {
          ans.push_back(s[m]);
          m++;
      }
  }
  reverse(ans.begin(),ans.end());
  for(i=0;i<ans.size();i++)
    cout<<ans[i];
  cout<<endl;
    return 0;
}
