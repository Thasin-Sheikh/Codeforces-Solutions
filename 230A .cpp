#include<bits/stdc++.h>
using namespace std;
int main()
{

    int ks,dn,ds[100000],poi[100000],kbs[100000],i,j,copyds[100000],flag=0;
    cin>>ks>>dn;
    for(i=0; i<dn; i++)
    {
        cin>>ds[i]>>kbs[i];
    }
    for(i=0; i<dn; i++)
    {
        copyds[i]=ds[i];
    }
    sort(ds,ds+dn);
    for(i=0; i<dn; i++)
    {
        for(j=0; j<dn; j++)
        {
            if(ds[i]==copyds[j])
            {
                poi[i]=kbs[j];
                copyds[j]=-1;
                break;
            }
        }
    }
    for(i=0; i<dn; i++)
    {
        if(ks<=ds[i])
            break;
        ks=ks+poi[i];
    }
    if(i==dn)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}

