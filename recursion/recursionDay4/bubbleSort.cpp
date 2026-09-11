#include <iostream>
using namespace std;

/*
void bubblesort(int arr[], int n ){
    for( int i =1 ; i < n ; i++ ){
        for( int j = 0 ; j < n-i ; j++ ){
            if ( arr[j] > arr[j+1] ){
                swap( arr[j] , arr[j+1] ) ;
            }
        }

    }
}
    */

void rbubblesort(int arr[], int n ){
    
    // base case
    if ( n == 1 ) {
        return ;
    }

    // ek case solve baki recursive
    for( int i = 0 ; i <n ; i++){
        if ( arr[i] > arr[i+1] ) {
            swap(arr[i], arr[i+1] );
        }
    }

    // recursive call
    rbubblesort( arr , n-1 ) ;
    
}



void print( int arr[] , int n ){
    for(int i = 0 ; i < n ; i++){
        cout<<arr[i] << endl ;
    }
}

int main() {

    int arr[11] = {45,96,23,87,32,12,02,36,82,24,69};

    rbubblesort(arr , 11 );

    print(arr , 11);


    return 0;
}