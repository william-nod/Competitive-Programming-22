#include<bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int n, int search) {
  // 33, 2, 1, 39, 60, 40, 56, 91 => 60
  // 33,
  // 33, 2, 
  // 33, 2, 1
  // 33, 2, 1, 39, 60 (Stop)
  for (int i = 0; i < n; i++) {
    if (arr[i] == search) {
      return i;
    }
  }
  return -1;
}

int main() {
  int arr[] = { 33, 2, 1, 39, 60, 40, 56, 91 };
  int len = sizeof(arr) / sizeof(int);
  int search = 60;

  // Memulai Perulangan
  int result = linearSearch(arr, len, search);
  cout << result;

  return 0;
}