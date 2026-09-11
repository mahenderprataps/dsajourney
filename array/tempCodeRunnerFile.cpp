#include <iostream>
#include <climits>
using namespace std;

void Cout( int arr[] ,int size) {

    cout<<"YOUR INPUT ARRAY \n";
    for(int i =0 ;i< size ;i++) {
        cout<<arr[i]<< " ";
    }
    cout<<endl;
}

int arrSum(int arr[] ,int size){
    int sum = 0;
    for( int i =0 ;i<size ;i++){
        sum = sum + arr[i];
    }

    return sum;
}


int main() {
    int size = 10;

    int arr[size] = {23,34,54,2324,23,45,6,76,78,99};


    Cout(arr ,size);
    
    int sum =arrSum(arr , size);

    cout<< "sum = " <<sum ;
    



    return 0;
}