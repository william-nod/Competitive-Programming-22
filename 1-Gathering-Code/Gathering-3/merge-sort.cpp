#include<bits/stdc++.h>
using namespace std;

void merged(vector<int> &arr, int start, int end) {
  int i = start;
  int mid = (start + end) / 2;
  int j = mid + 1;

  vector<int> temp;
  while(i <= mid and j <= end) {
    if (arr[i] < arr[j]) {
      temp.push_back(arr[i]);
      i++;
    } else {
      temp.push_back(arr[j]);
      j++;
    }
  }

  while (i <= mid) {
    temp.push_back(arr[i++]);
  }

  while (j <= end) {
    temp.push_back(arr[j++]);
  }

  int k = 0;
  for (int idx = start; idx <= end; idx++) {
    arr[idx] = temp[k++];
  }
}

void merge_sort(vector<int> &arr, int start, int end) {
  if (start >= end) {
    return;
  }

  int mid = (start + end) / 2;
  merge_sort(arr, start, mid);
  merge_sort(arr, mid + 1, end);
  return merged(arr, start, end);
}

int main() {
  vector<int> arr = { 10, 34, 2, 9, 1, 8, 3 };

  int start = 0;
  int end = arr.size() - 1;

  merge_sort(arr, start, end);

  for(int i=0; i<arr.size(); i++) {
    cout << arr[i] << ", ";
  }

  return 0;
}