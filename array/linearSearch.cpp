#include <iostream>
using namespace std;

void Cout( int arr[] ,int size) {

    cout<<"YOUR INPUT ARRAY \n";
    for(int i =0 ;i< size ;i++) {
        cout<<arr[i]<< " ";
    }
    cout<<endl;
}

bool LinearSearch(int arr[] ,int size , int skey){
    
    for( int i =0 ;i<size ;i++){
        if ( arr[i] == skey ){
            return 1 ;
        }
    }

    return 0;
}


int main() {
    int size = 10;

    int arr[size] = {23,34,54,2324,23,45,6,76,78,99};

    int searchInput = 99;


    Cout(arr ,size);
    
    bool search =LinearSearch(arr , size , searchInput );

    cout<< "search = " <<search ;
    



    return 0;
}