#include<iostream>
using namespace std;

void conquer(int arr[], int si, int ei, int mid) {
    int len = ei - si + 1;
    int newarr[len];
    int i = si;
    int j = mid + 1;
    int x = 0;

    while (i <= mid && j <= ei) {
        if (arr[i] >= arr[j]) {
            newarr[x++] = arr[j++];
        } else {
            newarr[x++] = arr[i++];
        }
    }

    while (i <= mid) {
        newarr[x++] = arr[i++];
    }

    while (j <= ei) {
        newarr[x++] = arr[j++];
    }

    for (int k = 0, l = si; k < len; k++, l++) {
        arr[l] = newarr[k];
    }
}

void divide(int arr[], int si, int ei) {
    if (si < ei) {
        int mid = si + (ei - si) / 2;
        divide(arr, si, mid);
        divide(arr, mid + 1, ei);
        conquer(arr, si, ei, mid);
    }
}

int main() {
    int arr[] = {8, 9, 4, 12, 1, 7, 3, 2, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    divide(arr, 0, size - 1);

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
