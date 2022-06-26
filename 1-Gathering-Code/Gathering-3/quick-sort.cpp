#include<bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr, int start, int end) {
  int pivot = arr[end];
  int i = start - 1;

  for (int j = start; j < end; j++) {
    if (arr[j] < pivot) {
      i++;
      swap(arr[i], arr[j]);
    }
  }
  swap(arr[i + 1], arr[end]);
  return i + 1;
}

void quick_sort(vector<int> &arr, int start, int end) {
  if (start >= end) {
    return;
  }
  int p = partition(arr, start, end);
  quick_sort(arr, start, p-1);
  quick_sort(arr, p+1, end);
}

int main() {
  vector<int> arr = { 10, 34, 2, 9, 1, 8, 3 };
  int start = 0;
  int end = arr.size() - 1;
  quick_sort(arr, start, end);

  for (int i = 0; i < arr.size(); i++) {
    cout << arr[i] << ", ";
  }
  return 0;
}