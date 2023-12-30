#include<iostream>
#include<cmath>
using namespace std;

int recur(int arr[], int size ){
    int re;
    int finalarr[10];
    int c = size-1;
     for (int i = 0; i < size; i++) {
        re = re * 10 + arr[i];
    }
    re += 1;
    while (re != 0)
    {
        finalarr[c] = re % 10;
        re /= 10;
        c--;    
    }
    for (int i = 0; i < size; i++)
    {
        cout<<finalarr[i]<<endl;
    }
    
    
    return 0;
}

int main(){
    int arr[]= {1, 2, 3, 4};
    int size = sizeof(arr)/sizeof(int);
    // linear(arr , value , size);
    recur(arr ,size );
    return 0;
}