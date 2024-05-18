#include <bits/stdc++.h>
using namespace std;

int helper(int l, vector<int> &arr, int r) {
    int pivot = arr[l];
    int i = l, j = r;
    while (i < j) {
        while (arr[i] <= pivot && i <= r) {
            i++;
        }
        while (arr[j] > pivot && j >= l+1) {
            j--;
        }
        if (i < j) {
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[l], arr[j]);
    return j;
}

void quickSort(int l, vector<int> &arr, int r) {
    if (l < r) {
        int pivot = helper(l, arr, r);
        quickSort(l, arr, pivot - 1);
        quickSort(pivot + 1, arr, r);
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        quickSort(0, arr, n - 1);
        for (auto i : arr) {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}
