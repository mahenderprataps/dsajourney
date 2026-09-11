#include <iostream>
using namespace std;

void Cout( int arr[] ,int size) {

    for(int i =0 ;i< size ;i++) {
        cout<<arr[i]<< " ";
    }
    cout<<endl;
}

void arrReverse(int arr[] ,int size){
    int start =0;
    int end =size-1;

    while (start < end ) {
        int temp;
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}


int main() {
    int size = 10;

    int arr[size] = {1,2,3,4,5,6,7,8,9,10};

    cout<<"YOUR INPUT ARRAY \n";
    Cout(arr ,size);
    
    arrReverse(arr , size );

    cout<<"after Reverse \n";
    Cout(arr ,size);
    



    return 0;
}