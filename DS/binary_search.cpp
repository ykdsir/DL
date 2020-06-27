/*
 * @Author: ykdsir
 * @Date: 2020-06-21 20:18:48
 * @LastEditTime: 2020-06-21 20:28:43
 * @LastEditors: ykdsir
 * @Description: 二分查找
 * @FilePath: /algorithms/DS/binary_search.cpp
 * @
 */ 

#include <iostream>
#include <vector>

using namespace std;

int left_bsearch(vector<int> arr, int l , int r, int target) {
    // 返回第一个大于等于 target 的下标
    while (l < r) {
        int mid = l + r >> 1;
        if (arr[mid] < target) {
            l = mid + 1;
        }
        else {
            r = mid;
        }
        
    }
    if(arr[l] >= target) return l;
    return -1;
}

int right_bsearch(vector<int> arr, int l , int r, int target) {
    // 返回最后一个小于等于 target 的下标
    while (l < r) {
        int mid = l + r + 1 >> 1;
        if (arr[mid] > target) {
            r = mid - 1;
        }
        else {
            l = mid;
        }
        
    }
    if(arr[l] <= target) return l;
    return -1;
}

int main(){
    vector<int> arr = {1, 1, 2, 2, 2, 4, 5, 6, 7, 9};
    cout << left_bsearch(arr, 0, arr.size() - 1, 2) << endl;
    cout << left_bsearch(arr, 0, arr.size() - 1, 10) << endl;
    cout << right_bsearch(arr, 0, arr.size() - 1, 2) << endl;
    cout << right_bsearch(arr, 0, arr.size() - 1, 0) << endl;
}