#include <bits/stdc++.h>
#include<vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    int temp;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        arr.push_back(temp);
    }
    sort(arr.begin(), arr.end());
    int sum = 0;
    for (int i = 0; i < n; i=i+2)
    {
        sum = sum + arr[i];
    }
    cout<< sum;
    return 0;
}