#include<iostream>
using namespace std;

int reverse(int arr[] , int size){
    int arr1[100];
    int j = 0;
    for ( int i = size-1;  i >= 0; i-- , j++)
    {
        arr1[j] = arr[i];
        cout<<arr1[j]<<endl;
    }
    return 0;
    
}

int main(){
    int arr[] = {1 , 2 , 3 ,4 , 5};
    int size =sizeof(arr) / sizeof(arr[0]);
    reverse(arr , size);
    return 0 ;
}