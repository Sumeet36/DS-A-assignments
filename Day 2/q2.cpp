#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int *a1 = new int[n];
    int *a2 = new int[m];
    set<int> res;
    
    for(int i=0;i<n;i++)
    cin>>a1[i];
    for(int i=0;i<m;i++)
    cin>>a2[i];
    
     map<int,int> freq;
    for(int i=0;i<n;i++)
    {
        freq[a1[i]]++;
    }
    for(int i=0;i<m;i++)
    {
       if(freq[a2[i]])
       {
           res.insert(a2[i]);
       }
    }
    
    for(auto itr:res)
    {
        cout<<itr<<" ";
    }
    delete [] a1;
    delete [] a2;
    return 0;
}