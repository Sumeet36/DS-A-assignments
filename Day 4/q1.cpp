#include<iostream>
#include<vector>

using namespace std;

int sub(vector<int> arr, int index, int total){
    if(index ==  arr.size()){
        return total;
    }
    return sub(arr, index+1, total ^ arr[index]) + sub(arr, index+1, total);
}

int main(){
    int n;
    vector<int> vec;
    cin >> n;
    int temp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        vec.push_back(temp);
    }
    int sum = sub(vec, 0,0);
    cout << sum;
    return 0;
}