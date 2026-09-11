#include <iostream>
using namespace std;

void Cout( int arr[] ,int size) {

    for(int i =0 ;i< size ;i++) {
        cout<<arr[i]<< " ";
    }
    cout<<endl;
}

int findUnique( int arr[] , int size){

    // int uq ;
    // for (int i=0 ;i<size ;i++){
    //     for ( int j=i+1 ;j<size ;j++){
    //         if ( i == j ){
    //            break; 
    //         }
            

    //     }
    //     if ( i != j) {
    //         +
    //     }

    // }

    // return uq ;

    int unique = 0 ;
    for ( int i = 0 ;i< size ; i++){
        unique = unique ^ arr[i] ;
    }

    return unique;
}




int main() {
    int size = 9;

    int arr[size] = {1,2,3,3,2,1,4,5,4};

    cout<<"YOUR CURRENT ARRAY \n";
    Cout(arr ,size);
    
    cout<<findUnique(arr,size)<<endl;

    
    



    return 0;
}