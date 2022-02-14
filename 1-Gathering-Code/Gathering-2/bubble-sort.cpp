#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[], int n) {
  // Iterasi 1            
  // (-2, 3), 4, -1, 5
  // -2, (3, 4), -1, 5
  // -2, 3, (4, -1), 5
  // -2, 3, -1, (4, 5)

  // Iterasi 2
  // (-2, 3), -1, 4, 5
  // -2, (3, -1), 4, 5
  // -2, -1, (3, 4), 5
  
  // Iterasi 3
  // (-2, -1), 3, 4, 5
  // -2, (-1, 3), 4, 5
  
  // Iterasi 4
  // (-2, -1), 3, 4, 5
  
  //--------------------
  // -2, -1, 3, 4, 5
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (arr[j] > arr[j+1]) {
        swap(arr[j], arr[j+1]);
      }
    }
  }
}

int main() {
  int arr[] = { -2, 3, 4, -1, 5 };
  int n = sizeof(arr) / sizeof(n);
  bubble_sort(arr, n);
  for (int i = 0;i < n;i++) {
    cout << arr[i] << endl;
  }
  return 0;
}
