#include <iostream>
using namespace std;
#include <algorithm>


int lowercaseToUPPER(char arr[], int n) {
    for( int i=0; i<n ; i++){
        if( arr[i] >= 'a' && arr[i] <= 'z') {
            arr[i] = arr[i] - 'a' + 'A' ;
        }
    }
}

int convertUCtoLC(char arr[], int n){
    for( int i=0; i<n ; i++){
        if( arr[i] >= 'A' && arr[i] <= 'Z') {
            arr[i] = arr[i] - 'A' + 'a' ;
        }
    }
}


int main( ) {
    
    int n = 10;
    char arr[n] ;

    //input 
    cout<<"enter your charArray: ";
    cin.getline(arr,n);

    // lowercaseToUPPER(arr, n);
    convertUCtoLC(arr,n);
    cout<< arr;


}