'''
@Author: ykdsir
@Date: 2020-06-20 08:39:42
@LastEditTime: 2020-06-20 08:43:51
@LastEditors: ykdsir
@Description: 
@FilePath: /algorithms/DS/sort/bubble_sort.py
@
'''

def bubble_sort(arr, n):
    for i in range(n):
        for j in range(n-i-1):
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]


if __name__ == "__main__":
    arr = [5,5,5,5,4,4,4,4,6,1,2,3,7,1]
    res = sorted(arr)
    bubble_sort(arr, len(arr))
    print(arr)
    assert res == arr