#include<iostream>
using namespace std;

void joinarray(int arr1[], int size1, int arr2[], int size2){
    const int maxSize = 100; // Choose a suitable maximum size
    int arr[maxSize];

    for (int i = 0; i < size1; i++)
    {
        arr[i] = arr1[i];
    }

    for (int i = size1; i < (size1 + size2); i++)
    {
        arr[i] = arr2[i - size1];
    }

    for (int i = 0; i < (size1 + size2); i++)
    {
        cout << arr[i] << endl;
    }
}

int main(){
    int arr1[] = {1, 2, 3, 4, 5};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = {6, 7, 8, 9};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    joinarray(arr1, size1, arr2, size2);
    return 0;
}
