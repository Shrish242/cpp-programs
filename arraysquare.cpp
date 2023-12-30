#include<iostream>
using namespace std;

void square(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        arr[i] = arr[i] * arr[i];
    }
}

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    square(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
    
    return 0;
}