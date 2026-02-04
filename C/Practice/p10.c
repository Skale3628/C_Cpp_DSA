#include <stdio.h>

int findMaxLen(int arr[], int n) {
    int count[2] = {0};
    int i, j, max_len = 0;

    for (i = 0; i < n; i++) {
        count[arr[i]]++;
    }

    for (i = 0; i < n; i++) {
        if (count[arr[i]] % 2 == 0) {
            int left_count[2] = {0}, right_count[2] = {0};

            for (j = i; j >= 0; j--) {
                left_count[arr[j]]++;
                if (left_count[arr[j]] % 2 == 0 && left_count[1 - arr[j]] == 0) {
                    break;
                }
            }

            for (j = i; j < n; j++) {
                right_count[arr[j]]++;
                if (right_count[arr[j]] % 2 == 0 && right_count[1 - arr[j]] == 0) {
                    break;
                }
            }

            max_len = (j - i) > max_len ? (j - i) : max_len;
        }
    }

    return max_len;
}

int main() {
    int arr[] = {1, 1, 0, 0, 0, 1, 1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("%d\n", findMaxLen(arr, n));
    return 0;
}