/*
 * @Author: ykdsir
 * @Date: 2020-06-20 10:21:59
 * @LastEditTime: 2020-06-21 17:53:56
 * @LastEditors: ykdsir
 * @Description: 
 * @FilePath: /algorithms/DS/sort/merge_sort.cpp
 * @
 */ 


#include <iostream>
#include <vector>

using namespace std;

void merge_sort(vector<int>& arr, int l, int r) {
    if (l >= r) return;
    int m = (l + r) / 2;
    merge_sort(arr, l, m);
    merge_sort(arr, m + 1, r);
    int tmp[r - l + 1];
    int i = l, j = m + 1, idx = 0;
    while(i <= m && j <= r) {
        if(arr[i] < arr[j]) {
            tmp[idx++] = arr[i++];
        }
        else {
            tmp[idx++] = arr[j++];
        }
    }
    while (i <= m) {
        tmp[idx++] =  arr[i++];
    }
    while (j <= r) {
        tmp[idx++] = arr[j++];
    }
    
    for(int i = l; i <= r; ++ i){
        arr[i] = tmp[i-l];
    }
}

int main(){
    vector<int> arr = {5, 5, 6, 5, 4, 6, 1, 4, 2, 3, 7};
    merge_sort(arr, 0 ,arr.size() - 1);
    for(int i = 0; i < arr.size(); ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}