#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,p,temp;
    cin>>n;
    vector<int> a;
    vector<int> Csum(n);
    vector<int> res;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        a.push_back(temp);
    }
    
    Csum[0]=a[0];
    for(int i=1;i<n;i++)
        Csum[i]=Csum[i-1]+a[i];

    cin>>p;
    for(int i=0;i<p;i++)
    {
        int lt,rt,t;
        cin>>lt;
        cin>>rt;
        
        if(lt==0)
            t= Csum[rt];
        else
            t = Csum[rt]-Csum[lt-1];
        res.push_back(t);
    }
    
    for(int i=0;i<res.size();i++)
        cout<<res[i]<<" ";
    return 0;
}