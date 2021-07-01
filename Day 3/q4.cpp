#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,first=1;
    cin>>n;
    vector<int> a(n);
    vector<int> b;
    for(int i=0;i<n;i++)
        cin>>a[i];
    b.push_back(first);
    
    for(int i=0;i<n;i++)
        b.push_back(b[b.size()-1]^a[i]);
    
    for(int i=0;i<b.size();i++)
        cout<<b[i]<<" ";
    return 0;
}