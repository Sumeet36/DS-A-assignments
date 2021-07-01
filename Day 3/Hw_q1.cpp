#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> nums(n);
    vector<int> index(n);
    vector<int> target(n);
    for(int i=0;i<n;i++)
        cin>>nums[i];
    for(int i=0;i<n;i++)
        cin>>index[i];
    
    for(int i=0;i<n;i++)
    {
        int pos=index[i];
        int value=nums[i];
        target.insert(target.begin()+pos,value);
    }
    
    for(int i=0;i<n;i++)
        cout<<target[i]<<" ";
    return 0;
}