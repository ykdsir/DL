/*
 * @Author: ykdsir
 * @Date: 2020-06-20 10:47:02
 * @LastEditTime: 2020-06-21 17:52:06
 * @LastEditors: ykdsir
 * @Description: 
 * @FilePath: /algorithms/DS/sort/heap_sort.cpp
 * @
 */ 

#include <iostream>
#include <vector>

using namespace std;

void up(int heap[], int idx) {
    while (idx > 0 && (heap[idx] < heap[(idx - 1) / 2])) {
        swap(heap[(idx-1)/2], heap[idx]);
        idx = (idx - 1) / 2;
    }
}

void down(int heap[], int n, int idx) {
    int t = idx;
    if (2 * idx + 1 < n && heap[t] > heap[2 * idx + 1]) {
        t = 2 * idx + 1;
    }
    if (2 * idx + 2 < n && heap[t] > heap[2 * idx + 2]) {
        t = 2 * idx + 2;
    }
    if (t != idx) {
        swap(heap[idx], heap[t]);
        down(heap, n, t);
    }
}

void heap_sort(vector<int>& arr, int n) {
    // 建堆
    int heap[n]; 
    int idx = 0;
    for (int i = 0; i < n; ++i) {
        heap[idx] = arr[i];
        up(heap, idx);
        idx ++;
    }
    // 排序
    int num = n;
    for (int i = 0; i < num; ++i) {
        arr[i] = heap[0];
        swap(heap[0], heap[n-1]);
        n -= 1;
        down(heap, n, 0);
    }
}

int main(){
    vector<int> arr = {5,5,6,5,4,6,1,4,2,3,7};
    heap_sort(arr, arr.size());
    for(int i = 0; i < arr.size(); ++i){
        cout << arr[i] << " ";
    }
    cout<<endl;
}