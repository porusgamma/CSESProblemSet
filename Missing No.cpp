#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n - 1];
    for (int i = 0; i < n - 1; i++) {
        cin >> arr[i];
    }

    int sum1 = n * (n + 1) / 2;
    int sum2 = 0;

    for (int i = 0; i < n - 1; i++) {
        sum2 += arr[i];
    }

    int diff = sum1 - sum2;
    cout << diff << endl;

    return 0;
}
