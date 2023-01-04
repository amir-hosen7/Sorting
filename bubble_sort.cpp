#include<iostream>
using namespace std;

void bubble_sort(int n, int arr[]) {
    for (int i = 0; i < n; i++) {
        for (int j = 1; j < n; j++) {
            if (arr[j - 1] > arr[j]) {
                int temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            }
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
    bubble_sort(n, arr);
    print(n, arr);
    return 0;
}

