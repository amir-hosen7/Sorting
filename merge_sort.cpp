#include<iostream>
using namespace std;

void partition(int L, int R, int arr[]) {
    if (L == R) return;
    int mid = L + (R - L) / 2;
    //dividing
    partition(L, mid, arr);
    partition(mid + 1, R, arr);
    
    // merging
    int l = mid - L + 1, r = R - mid;
    int left[l + 5], right[r + 5];
    for (int i = 0; i < l; i++) {
        left[i] = arr[L + i];
    }
    for (int i = 0; i < r; i++) {
        right[i] = arr[mid + i + 1];
    }
    int idxL = 0, idxR = 0;
    while (idxL < l and idxR < r) {
        if (left[idxL] <= right[idxR]) arr[L++] = left[idxL++];
        else arr[L++] = right[idxR++];
    }
    while (idxL < l) arr[L++] = left[idxL++];
    while (idxR < r) arr[L++] = right[idxR++];
}

void merge_sort(int n, int arr[]) {
    partition(0, n - 1, arr);
}

void print(int n, int arr[]) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main() {
    int n;
    cin >> n;
    int arr[n + 5];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    merge_sort(n, arr);
    print(n, arr);
    return 0;
}

