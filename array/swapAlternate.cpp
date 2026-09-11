#include <iostream>
using namespace std;

void Cout( int arr[] ,int size) {

    for(int i =0 ;i< size ;i++) {
        cout<<arr[i]<< " ";
    }
    cout<<endl;
}

void swapAlternate(int arr[] , int size ){
    int start = 0;
    // int next = start+1 ;
    while ( start+1 < size ) {
        int next = start+1 ;
        int temp;
        temp = arr[start];
        arr[start] = arr[next];
        arr[next] = temp;

        start =start+2;
    }
}




int main() {
    int size = 10;

    int arr[size] = {1,2,3,4,5,6,7,8,9,10};

    cout<<"YOUR INPUT ARRAY \n";
    Cout(arr ,size);
    
    swapAlternate(arr , size );

    cout<<"after Reverse \n";
    Cout(arr ,size);
    



    return 0;
}