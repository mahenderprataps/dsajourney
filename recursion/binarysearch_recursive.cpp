#include <iostream>
using namespace std;

bool binarySearch(int arr[], int s ,int e, int aim){

    int mid = (s+e)/2 ;

    if( s > e){
        return false;
    }

    if( aim == arr[mid]){
        return true;
    }

    if ( aim > arr[mid] ){
        return binarySearch(arr, mid+1, e, aim );
    }

    if( aim < arr[mid] ){
        return binarySearch( arr, s, mid-1, aim);
    }





}

int main() {
    //given sorted array and size
    int arr[10] = {11,12,13,14,15,16,17,18,19,20};

    int aim = 18;
    
    bool ans = binarySearch(arr,0, 9, aim);

    cout<< ans;


    return 0;
}