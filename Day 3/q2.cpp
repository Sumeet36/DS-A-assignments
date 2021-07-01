#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int *a1=new int[n];
    char *a2=new char[n];
    char *a3=new char[n];
    for(int i=0;i<n;i++)
        cin>>a1[i];
    for(int i=0;i<n;i++)
        cin>>a2[i];
    for(int i=0;i<n;i++)
    {
        a3[a1[a1[i]]]= a2[a1[i]];
    }
    for(int i=0;i<n;i++)
        cout<<a3[i]<<" ";
    return 0;
}