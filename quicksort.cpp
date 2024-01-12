#include<iostream>
using namespace std;

int partition(int arr[] , int low , int high){
    int pivot = arr[high];
    int i = low -1;

    for (int j = low; j < high; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    i++;
    int temp = arr[i];
    arr[i] = pivot;
    arr[high] = temp;
    return i;
}

void sort(int arr[] , int low, int high){
    if (low < high)
    {
        int partindx = partition(arr , low , high);
        sort(arr , low , partindx-1);
        sort(arr , partindx + 1 , high);
    }
    
}

int main(){
    int arr[] = {8, 9, 4, 12, 1, 7, 3, 2, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    sort(arr, 0 , size-1);
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
    
}