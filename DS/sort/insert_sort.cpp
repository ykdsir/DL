/*
 * @Author: ykdsir
 * @Date: 2020-06-21 17:41:44
 * @LastEditTime: 2020-06-21 17:48:45
 * @LastEditors: ykdsir
 * @Description: 
 * @FilePath: /algorithms/DS/sort/insert_sort.cpp
 * @
 */ 

#include <iostream>
#include <vector>
using namespace std;

void insert_sort(vector<int>& arr, int n){
    for (int i = 1; i < n; ++ i) {
        for (int j= i-1; j >= 0; -- j) {
            if (arr[j] > arr[j+1]) {
                swap(arr[j],arr[j+1]);
            }
            else {
                break;
            }
        }
    }
}

int main() {
    vector<int> arr = {5,5,6,5,4,6,1,4,2,3,7};
    insert_sort(arr ,arr.size()-1);
    for(int i = 0; i < arr.size(); ++i) {
        cout << arr[i] << " ";
    }
    cout<<endl;
}