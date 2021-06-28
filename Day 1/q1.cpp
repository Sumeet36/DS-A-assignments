#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int *a = new int[n];
    for(int i=0;i<n;i++)
    cin>>a[i];

    int i=0;
    for(;i<n;)
    {
        if(a[i]==a[i+1])
        {
            for(int k=i;k<n;k++)
                a[k]=a[k+1];
            n--;
        }
        else
            i++;
    }

    for(int i=0;i<n;i++)
    cout<<a[i];
    return 0;
}
