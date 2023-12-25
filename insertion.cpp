#include<iostream>
using namespace std;

void traversal(int arr[] , int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<endl;
    }
    cout<<endl;
    
}

int insert(int arr[], int element , int index, int size, int capacity){
    if (size > capacity)
    {
        return -1;
    }
    else {
        for ( int i = size -1; i >= index ; i--)
        {
            arr[i+1] = arr[i]; 
        }
        arr[index] = element;
        return 1;
    }
    
}

//to make this section work you need to remove the insert part
int delete1(int arr[],  int index, int size){
    for (int i = index; i < size; i++)
    {
        arr[i] = arr[i+1];
    }
    size -= 1;
}

int main(){
    int arr[] = {2 , 4 , 8, 10};
    int size = 4, element= 6, index= 2;
    traversal(arr , size);
    insert(arr , element , index , size , 100);
    size += 1;
    traversal(arr, size);
    delete1(arr, index , size );
    size -= 1;
    traversal(arr, size);

return 0;
}