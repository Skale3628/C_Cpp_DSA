#include <iostream>
#include <vector>
using namespace std;

int equilibrium(vector<int> arr) {
    int n = arr.size();
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    int left_sum = 0;
    for (int i = 0; i < n; i++) {
        sum -= arr[i];
        if (left_sum == sum) {
            return i + 1;
        }
        left_sum += arr[i];
    }
    return -1;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int index = equilibrium(arr);
    if (index == -1) {
        cout << "NOT FOUND" << endl;
    } else {
        cout << index << endl;
    }

    return 0;
}