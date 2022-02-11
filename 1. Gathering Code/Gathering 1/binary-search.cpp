#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int len, int search) {
  // 1, 2, 3, 4, 5, 6, 7 => 2
  // 1, 2, 3 => 2
  // index 1
  int start = 0;
  int end = len - 1;
  while (start <= end) {
    int mid = (start + end) / 2;
    if (search < arr[mid]) {
      end = mid - 1;
    }
    else if (search > arr[mid]) {
      start = mid + 1;
    }
    else {
      return mid;
    }
  }
  return -1;
}

int main() {
  int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
  int len = sizeof(arr) / sizeof(int);
  int search = 2;

  // Memulai Pencarian
  int result = binarySearch(arr, len, search);
  cout << result;

  return 0;
}