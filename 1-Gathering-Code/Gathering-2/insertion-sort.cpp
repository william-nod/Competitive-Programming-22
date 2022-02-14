#include <bits/stdc++.h>
using namespace std;

void insertion(int arr[], int n) {
  // 5, 3, 4, -1, -2
  // ---------------------------------
  // 5                |  3, 4, -1, -2
  // 3, 5             |  4, -1, -2
  // 3, 4, 5          |  -1, -2
  // -1, 3, 4, 5      |  -2
  // -2, -1, 3, 4, 5  | 
  // ---------------------------------
  // -2, -1, 3, 4, 5
  
  for (int i = 1; i < n; i++) {
    int current = arr[i];
    int prev = i - 1;
    while (prev >= 0 && arr[prev] > current) {
      arr[prev + 1] = arr[prev];
      prev = prev - 1;
    }
    arr[prev + 1] = current;
  }
}

int main() {
  int arr[] = { 5, 3, 4, -1, -2 };
  int n = sizeof(arr) / sizeof(int);
  insertion(arr, n);
  for (int i = 0; i < n; i++) {
    cout << arr[i] << ", ";
  }
  return 0;
}