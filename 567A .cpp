#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,a,array[100000+10],i;
    long long int lfirst ,sec,third,mfirst,p,p2;
    string str,ptr;
    vector<long long int>low,high;
    char ch;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>array[i];
    }
    array[n]=array[0];
    lfirst=abs(array[1]-array[0]);
    mfirst=abs(array[n-1]-array[0]);
    for(i=1;i<n;i++)
    {
        p=min(abs(array[i]-array[i+1]),abs(array[i]-array[i-1]));
        p2=max(abs(array[i]-array[0]),abs(array[i]-array[n-1]));
        low.push_back(p);
        high.push_back(p2);
    }


cout<<lfirst<<" "<<mfirst<<endl;
for(i=0;i<low.size();i++)
{
    cout<<low[i]<<" "<<high[i]<<endl;

}
}
