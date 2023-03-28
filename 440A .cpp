#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,ar[100000],i,j,cnt=0,a,b,ans,array[100000+10];
    string str[30001],ptr;
    vector<long long int>vec;
    char ch;
    cin>>n;
    for(i=0; i<n-1; i++)
    {
        cin>>array[i];
    }
    sort(array,array+n-1);
    i=1;
    for(j=0; j<n-1;)
    {
        if(array[j]!=i)
        {
            vec.push_back(i);
        }
        else
        {
            j++;
        }
        i++;
    }
    if(vec.size()==0)
        cout<<n<<endl;
    else
    {
        for(i=0; i<vec.size(); i++)
            cout<<vec[i]<<" ";
    }
}
