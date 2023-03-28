#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d,n,m,i,j,p,t,k,array[100000+10],ar[100000],q,sum1=0,cnt,sum=INT_MIN,flag=0,ans,f=0;
    long long int st,ct,qt;
    string str,ptr,sp[5000];
    set<pair<long long int,long long int>>vecs;
    vector<long long int>vi;
    stack<long long int>stck;
    char ch1;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>array[i];
    }
    sort(array,array+n);
    for(i=0; i<n;)
    {
        if(array[i]==0)
        {
            i++;
        }
        else
        {
            cnt=0;
            p=array[i];
            for(j=1; j<n; j++)
            {
                if(array[j]!=0&&array[j]%p==0){
                    cnt++;
                     array[j]=0;}
            }
            vi.push_back(cnt);
            i++;
        }
    }
    //for(i=0;i<vi.size();i++)
      //  cout<<vi[i]<<" ";
   cout<<vi.size()<<endl;

}
