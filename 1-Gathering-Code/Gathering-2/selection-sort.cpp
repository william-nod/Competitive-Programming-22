#include<bits/stdc++.h>
using namespace std;

void selection(int arr[], int n) {
  // arr = 5, 3, 4, -1, -2
  //-----------------------------------
  // 5,             | 3, 4, -1, -2
  // -2, 3,         | 4, -1, 5
  // -2, -1, 4      | 3, 5
  // -2, -1, 3, 4   | 5
  //-----------------------------------
  // -2, -1, 3, 4, 5

  for (int i = 0; i < n; i++) {
    int min_position = i;
    for (int j = i + 1; j < n; j++) {
      if (arr[j] < arr[min_position]) {
        min_position = j;
      }
    }
    swap(arr[i], arr[min_position]);
  }

  
}

int main() {
  int arr[] = { 5, 3, 4, -1, -2 };
  int n = sizeof(arr) / sizeof(int);
  selection(arr, n);
  for (int i = 0; i < n; i++) {
    cout << arr[i] << ", ";
  }
  return 0;
}
