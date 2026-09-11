#include <iostream>
using namespace std;

void Coutarray( int arr[] ,int size) {

    for(int i =0 ;i< size ;i++) {
        cout<<arr[i]<< " ";
    }
    cout<<endl;
}

void Nrightshift(int arr[] ,int size) {

    int noOfShift = 4;
    
    while ( noOfShift > 0 ) {

        int temp = arr[size-1];

        for(int i= size-1 ; i >= 0 ; i--) {
            if( i != 0){
                arr[i] = arr[i-1] ; 
            } else {
                arr[i] = temp ;
            }                                                   // O(n^2) time complex
        }
        cout<<endl;



        noOfShift-- ;
    }


}

int main() {

    int size = 7;
    int arr[size] = {1,2,3,4,5,6,7};

    Coutarray(arr , size );

    Nrightshift(arr , size );

    Coutarray(arr , size);

    
}