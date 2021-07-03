#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,temp;
    cin >> n;
    vector<int> arr, vec;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        arr.push_back(temp);
    }
    vec = arr;
    sort(arr.begin(), arr.end());
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if(vec[i] != arr[i]){
            count++;
        }
    }
    cout<<count;
    
}