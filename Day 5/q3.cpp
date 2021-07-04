#include<bits/stdc++.h>
using namespace std;

bool check(int *a[], int i,int j,int n,int m)
{
    if(i>=0&&i<n&&j>=0&&j<m)
        if(a[i][j])
            return true;
    return false;
}


int main()
{
    int n,m,sum=0;
    cin>>n>>m;
    int *a[n];
    for(int i = 0; i < m; i++)
        a[i] = new int[m];
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>a[i][j];
    
    for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
        if(a[i][j]==1)
        {
            sum=sum+4;
            if(check(a,i-1,j,n,m)) sum--;
            if(check(a,i+1,j,n,m)) sum--;
            if(check(a,i,j-1,n,m)) sum--;
            if(check(a,i,j+1,n,m)) sum--;
        }
    cout<<sum<<endl;
    return 0;
}