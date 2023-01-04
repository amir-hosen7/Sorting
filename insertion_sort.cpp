#include<iostream>
using namespace std;

void insertion_sort(int n, int arr[]) {
    for (int i = 1; i < n; i++) {
        int j = i;
        while (j > 0 and arr[j - 1] >= arr[j]) {
            int temp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = temp;
            j--;
        }
    }
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
    insertion_sort(n, arr);
    print(n, arr);
    return 0;
}

