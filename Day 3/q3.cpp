#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    vector<int> b;
    for(int i=0;i<n;i++)
        cin>>a[i];
        
    for(int i=0;i<n-1;i+=2)
        while(a[i]--)
            b.push_back(a[i+1]);
    
    for(int i=0;i<b.size();i++)
        cout<<b[i]<<" ";
    return 0;
}