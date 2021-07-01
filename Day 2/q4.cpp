#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0;
    map <int,int> m;
    cin>>n;
    int *a = new int[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
        
    for(int i=0;i<n;i++)
    {
        m[a[i]]++;
    }
    for(auto itr:m)
    {
        count+=itr.second*(itr.second-1)/2;
    }
    
    cout<<count;
    delete [] a;
    return 0;
}