#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d,n,m,i,j,array[100000+10],p,q,sum=0,cnt1=0,cnt,cnt2=0,cnt3=0,flag=1;
    long long int st,ct,qt;
    string str,ptr;
    vector<pair<long long int,long long int>> veci;
    vector<char>vecc;
    vector<string>vecs;
    queue<long long int>vecq;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a>>b;
        veci.push_back(make_pair(a,b));

    }
    for(auto jt=veci.begin();jt!=veci.end();jt++)
    {
        //cout<<jt->first<<" "<<it->first<<endl;
         //cout<<jt->second<<" "<<it->second<<endl;

        if(jt->first>jt->second)
        {
            flag=0;
            break;
        }
    }

  //cout<<flag<<endl;
   if(flag)
    cout<<"Poor Alex"<<endl;
   else cout<<"Happy Alex"<<endl;


    return 0;
}

