#include <iostream>
using namespace std;
#include <algorithm>

void task1( char arr[] , int n) { // check char array is end with null charr thats ascii val is 0
     //output
    // cout<<arr;
    int i=0;
    while( i<n ){
        cout<<i<<" "<<arr[i]<<" "<<(int) arr[i] <<endl;
        i++;
    }

}


void task2( char arr[], int n) { // space replace by z
    for(int i=0; i<n ; i++){
        if( arr[i] == ' '){
            arr[i] = 'Z';
        }
    }
}


int main( ) {
    
    int n = 10;
    char arr[n] ;

    // task = input lete time jaha x aye waha se age ka input nahi lena
    // cout<<"enter your charArray: ";
    // cin.getline(arr,n,'x');

    cout<< "enter your charArray: ";
    cin.getline(arr,n);

    task2(arr,n);

    cout<<endl<<arr ;




   
}