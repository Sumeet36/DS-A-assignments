#include<bits/stdc++.h>
using namespace std;

int main ()
{
  int n;
  cin >> n;
  int *a = new int[n];
  for (int i = 0; i < n; i++)
    cin >> a[i];
  int m = n/2;
  for(int i=0,y=1;i<n/2;i++,y++)
  {
      int temp=a[m];
      for(int j=m;j>i+y;j--)
      a[j]=a[j-1];
      a[i+y]=temp;
      m++;
  }

  for (int i = 0; i < n; i++)
    cout << a[i]<<endl;
}
