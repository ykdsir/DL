/*
 * @Author: ykdsir
 * @Date: 2020-06-20 08:32:18
 * @LastEditTime: 2020-06-21 17:55:33
 * @LastEditors: ykdsir
 * @Description: 
 * @FilePath: /algorithms/DS/sort/bubble_sort.cpp
 * @
 */ 

#include <iostream>
#include <vector>
using namespace std; 

void BubbleSort(vector<int>& arr, int n) {
    for(int i = 0; i < n; ++i){
        bool flag = true;
        for(int j = 0; j < n-i-1; ++j){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                flag = false;
            }
        }
        if(flag){
            break;
        }
    }   
}

int main(){
    vector<int> arr = {5,5,6,5,4,6,1,4,2,3,7};
    BubbleSort(arr, arr.size());
    for(int i = 0; i < arr.size(); ++i){
        cout << arr[i] << " ";
    }
    cout << endl;
}