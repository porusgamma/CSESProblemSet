#include <bits/stdc++.h>
using namespace std;

int main() {
    int size;
    cin >> size;
    int arr[size];
    cout << "Enter elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int ans = 0;
    for (int i = 1; i < size; i++) {
        if (arr[i] < arr[i-1]) {
            ans += arr[i-1] - arr[i];
            arr[i] = arr[i-1];
        }
    }

    cout << ans << endl;
    return 0;
}
