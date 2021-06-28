#include<bits/stdc++.h>
using namespace std;

int main ()
{
  int n;
  cin >> n;
  int *a = new int[n];
  int *b = new int[n];
  for (int i = 0; i < n; i++)
    cin >> a[i];
  
  for(int i=0,j=n/2,k=0;i<n/2;i++,j++,k++)
    {
        b[k]=a[i];
        k++;
        b[k]=a[j];
    }

  for (int i = 0; i < n; i++)
    cout << b[i];
}
