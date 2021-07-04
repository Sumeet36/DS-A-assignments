#include<bits/stdc++.h>
using namespace std;

bool compare(int a,int b)
{
    int c1=0,c2=0;
    int a1=a,b1=b;
    while(a1)
    {
        a1=a1&(a1-1);
        c1++;
    }
    while(b1)
    {
        b1=b1&(b1-1);
        c2++;
    }
    if(c1==c2)
        return a<b;
    return (c1<c2);
}

int main()
{
    int n;
    cin>>n;
    int *a=new int[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    sort(a,a+n,compare);
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    return 0;
}