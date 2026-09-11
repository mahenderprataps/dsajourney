#include <iostream>
using namespace std;

void Cout( int arr[] ,int size) {

    for(int i =0 ;i< size ;i++) {
        cout<<arr[i]<< " ";
    }
    cout<<endl;
}

void swapAlternate(int arr[] , int size ){
    for( int i= 0 ;i<size ;i+=2) {
        if( i+1 < size ){
            swap(arr[i],arr[i+1]);
        }
    }
}




int main() {
    int size = 10;

    int arr[size] = {1,2,3,4,5,6,7,8,9,10};

    cout<<"YOUR INPUT ARRAY \n";
    Cout(arr ,size);
    
    swapAlternate(arr , size );

    cout<<"after SWAP ALTER \n";
    Cout(arr ,size);
    



    return 0;
}