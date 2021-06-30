#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int n,extra,max=0;
    cin>>n;
    vector<int> a(n);
    vector<bool> b;
    for(int i=0; i<a.size(); i++)
        cin>>a[i];
    cin>>extra;
    max=*max_element(a.begin(),a.end());
    for(int i=0; i<a.size(); i++)
    {
        if((a[i]+extra)>=max)
            b.push_back(true);
        else
            b.push_back(false);
    }
    for(int i=0; i<b.size(); i++)
        if(b[i]==1)
            cout<<"true ";
        else
            cout<<"false ";
    return 0;
}
