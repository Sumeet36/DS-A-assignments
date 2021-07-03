#include<iostream>
using namespace std;

int peak(int a[], int lt, int rt)
{
    if (lt == rt)
        return lt;
    if ((lt + 1 == rt) && a[lt] >= a[rt])
        return lt;
    if ((lt + 1 == rt) && a[lt] < a[rt])
        return rt;
     
    int m = (lt + rt)/2;
    if ( a[m] > a[m + 1] && a[m] > a[m - 1])
        return m;

    if (a[m] > a[m + 1] && a[m] < a[m - 1])
        return peak(a, lt, m-1);
    else
        return peak(a, m + 1, rt);
}

int main(){
    int n,flag,max=0;
    cin >> n;
    int *a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin>> a[i];
    }
    flag = peak(a,0,n);
    cout << flag;
    return 0;
}