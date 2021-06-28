#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n, key;
  cin >> n;
  int *a = new int[n];
  for (int k = 0; k < n; k++)
    cin >> a[k];
  cin >> key;
  for (int i = 0; i < n; i++)
    {
      if (a[i] == key)
    	{
    	  for (int j = n - 1; j > i; j--)
    	    {
    	      if (a[j] != key)
    		{
    		  swap (a[i], a[j]);
    		  break;
    		}
    	    }
    	}
    }
  for (int i = 0; a[i] != key; i++)
    cout << a[i];
  return 0;
}