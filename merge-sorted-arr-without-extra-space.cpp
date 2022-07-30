#include<bits/stdc++.h>

using namespace std;
void merge(int arr1[], int arr2[], int n, int m) {
    int gap = ceil((m+n)/2), i, j;
    while(gap>0)
    {
        i=0, j=gap;
        while(j<(m+n))
        {
            if(j<n && arr1[i]>arr1[j])
                swap(arr1[i], arr1[j]);
            else if(i<n && j>=n && arr1[i]>arr2[j-n])
                swap(arr1[i], arr2[j-n]);
            else if(i>=n && arr2[i-n]>arr2[j-n])
                swap(arr2[i-n], arr2[j-n]);
            ++i;
            ++j;
        }
        gap = gap>>1;
    }
}

int main() {
  int arr1[] = {1,4,7,8,10};
  int arr2[] = {2,3,9};
  cout << "Before merge:" << endl;
  for (int i = 0; i < 5; i++) {
    cout << arr1[i] << " ";
  }
  cout << endl;
  for (int i = 0; i < 3; i++) {
    cout << arr2[i] << " ";
  }
  cout << endl;
  merge(arr1, arr2, 5, 3);
  cout << "After merge:" << endl;
  for (int i = 0; i < 5; i++) {
    cout << arr1[i] << " ";
  }
  cout << endl;
  for (int i = 0; i < 3; i++) {
    cout << arr2[i] << " ";
  }
  cout << endl;
}
