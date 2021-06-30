#include<bits/stdc++.h>
using namespace std;

int main ()
{
  int r, c,max=0,p=0;
  cin >> r >> c;
  vector < vector < int >>a (r, vector < int >(c));
 
  for (int i = 0; i < r; i++)
    for (int j = 0; j < c; j++)
      cin>>a[i][j];
      
  for (int i = 0; i < r; i++)
    {
        int sum=0;
      for (int j = 0; j < c; j++)
    	sum+=a[i][j];
      if(sum>max){
        max=sum;
        p=i+1;
      }
    }
    cout<<"Person "<<p<<" is richest with total amount "<<max<<" in the banks";
  return 0;
}
