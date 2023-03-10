#include<iostream>
using namespace std;

void selection_sort(int n, int arr[]) {
    for (int i = 0; i < n; i++) {
        int Min = arr[i], idx = i;
        for (int j = i; j < n; j++) {
            if (arr[j] < Min) {
                Min = arr[j], idx = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[idx];
        arr[idx] = temp;
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
    selection_sort(n, arr);
    print(n, arr);
    return 0;
}

