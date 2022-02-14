#include <bits/stdc++.h>
using namespace std;

void counting_sort(int a[], int n) {
  int largest = INT_MIN;

  for (int i = 0;i < n;i++) {
    largest = max(largest, a[i]);
  }

  vector<int> freq(largest+1, 0);
  
  for (int i = 0;i < n;i++) {
    freq[a[i]]++;
  }
  
  int j = 0;
  
  for (int i = 0;i <= largest;i++) {
    while (freq[i] > 0) {
      a[j] = i;
      freq[i]--;
      j++;
    }
  }
  return;
}

int main() {
  int arr[] = { 23, 42, 11, 4, 48 };
  int n = sizeof(arr) / sizeof(n);
  counting_sort(arr, n);
  for (int i = 0; i < n; i++) {
    cout << arr[i] << ", ";
  }
  return 0;
}