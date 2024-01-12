#include<iostream>
using namespace std;

int missingnum(int arr[] , int size){
    int i;
    for ( i = 0; i <= size; i++)
    {
        if ( i != arr[i])
        {
            cout<<"The missing number is: "<<i;
            break;
        }
        else if (size == arr[size]){
            cout<<"The missing number is: "<<size;
            break;
        }
    }
    return 0;
    
}

int main(){
    int arr[] = {0, 1, 2, 3 ,4 ,5, 6, 7,8};
    int size = sizeof(arr)/sizeof(arr[0]);
    missingnum(arr , size);
    return 0;
}