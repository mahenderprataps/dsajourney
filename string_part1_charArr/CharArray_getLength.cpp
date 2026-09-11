#include <iostream>
using namespace std;
#include <algorithm>
#include <cstring>

int getlength(char arr[], int n) {
    int length=0;
    for (int i =0; arr[i] != '\0' ; i++){
        length++;
    }

    return length;
}

int main( ) {
    
    int n = 10;
    char arr[n] ;

    //input 
    cout<<"enter your charArray: ";
    cin.getline(arr,n);

    // find length
    cout<<"lengthofCHARARRAY is "<< getlength(arr, n)<<endl; //user defined

    cout<<strlen(arr); // pre defind

}