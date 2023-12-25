#include<iostream>
using namespace std;

int linear(int arr[], int value){
    for (int i = 0; i < value; i++)
    {
        if (arr[i] == value)
        {
            cout<<"value found at index "<<i<< " is "<< arr[i]<<endl;
        }
    }
    return 0;
}

int binary(int arr[] , int value , int size){
    int high , low , mid;
    low= 0 ;
    high = size -1;
    while (low <= high )
    {
        mid = (high + low)/2;
        if (arr[mid] = value)
        {
            cout<<"value found at index "<<mid<< " is "<< arr[mid]<<endl;
        }
        else if(arr[mid] < value){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
        
    }

return -1;
    
}

int main(){
    int arr[]= {1, 2, 3, 4, 5, 6, 7, 8,9};
    int size = sizeof(arr)/sizeof(int);
    int value = 5;
    // linear(arr , value , size);
    binary(arr , value ,size );
    return 0;

}