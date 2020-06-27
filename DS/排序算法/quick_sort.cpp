/*
 * @Author: ykdsir
 * @Date: 2020-06-20 09:34:38
 * @LastEditTime: 2020-06-21 17:54:48
 * @LastEditors: ykdsir
 * @Description: 
 * @FilePath: /algorithms/DS/sort/quick_sort.cpp
 * @
 */ 

#include <iostream>
#include <vector>
using namespace std;

void quick_sort(vector<int>& arr, int l, int r) {
    if (l >= r) {
        return;
    }
    int i = l - 1, j = r + 1, x = arr[l + r >>1];
    while (i < j) {
        do i ++; while (arr[i] < x);
        do j --; while (arr[j] > x);
        if (i < j) swap(arr[i], arr[j]);
    }
    quick_sort(arr, l, j);
    quick_sort(arr, j+1, r);
}

int main(){
    vector<int> arr = {5, 5, 6, 5, 4, 6, 1, 4, 2, 3, 7};
    quick_sort(arr, 0 ,arr.size() - 1);
    for(int i = 0; i < arr.size(); ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}