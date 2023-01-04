#include<iostream>
using namespace std;

void counting_sort(int n, int arr[]) {
    int Max = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > Max) Max = arr[i];
    }
    int cnt[Max + 5];
    for (int i = 0; i <= Max; i++) cnt[i] = 0;
    for (int i = 0; i < n; i++) {
        cnt[arr[i]]++;
    }
    for (int i = 0; i <= Max; i++) {
        while (cnt[i]) {
            cout << i << " ";
            cnt[i]--;
        }
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
    counting_sort(n, arr);
    return 0;
}

