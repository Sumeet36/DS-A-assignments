#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    vector<int> b(n);
    vector<int>::iterator it;
    for(int i=0;i<n;i++)
    { cin>>a[i];
      b[i]=a[i];
    }
    sort(b.begin(),b.end());
    for(int i=0;i<n;i++)
    {
        int key=a[i];
        it=find(b.begin(),b.end(),key);
        cout<<it-b.begin()<<" ";
    }
    return 0;
}