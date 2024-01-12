#include<iostream>
using namespace std;

int move(int arr[] , int size, int index){
    int i = 0;

    if (index == size-1)
    {
        for (int j = 0; j <= size-1; j++)
        {
            cout<<arr[j]<<endl;
        }
    }
    
    if (arr[i] == 0)
    {
        while (i < size )
        {
            arr[i] = arr[i+1];
            arr[size] = 0;
            i++;
        }
    }
    move(arr , size, index+1);
    return 0;
}

int main(){
    int arr[] = {0 , 0 , 1 , 2 ,3 , 4};
    int size = sizeof(arr)/sizeof(arr[0]);
    move(arr , size , 0);
    return 0;

}