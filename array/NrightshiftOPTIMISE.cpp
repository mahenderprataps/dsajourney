#include <iostream>
using namespace std;

void Coutarray( int arr[] ,int size) {

    for(int i =0 ;i< size ;i++) {
        cout<<arr[i]<< " ";
    }
    cout<<endl;
}

void Nrightshift(int arr[] ,int size) {

    int noOfShift = 7  ;
    int k = noOfShift;

    //smart choice 
    k = k % size ;

    int temp[k];
    int j=0;
    for( int i =size-k; i<= size-1 ; i++) {
        
        temp[j] = arr[i];
        // cout<<i<<endl;
        // cout<<arr[i]<<endl;
        j++;
    }

    // Coutarray( temp , k );

    for (int j=size-1 ; j>=0 ;j--){
        if( j >= k) {
            arr[j] = arr[j-k];
        }
        else {
            arr[j] = temp[j];
        }
    }
    cout<<endl;

}

int main() {

    int size = 6;
    int arr[size] = {1,2,3,4,5,6};

    cout<<"before shift"<<endl;
    Coutarray(arr , size );

    Nrightshift(arr , size );

    cout<<"after shift"<<endl;
    Coutarray(arr , size);

    
}