#include <iostream>
using namespace std;

bool RecursiveLsearch(int arr[] ,int tgt, int n ){
    //base case 
    if (n == 0 && arr[0] != tgt ){
        return 0;
    }

    if ( arr[n] == tgt ){
        return 1;
    }

    return RecursiveLsearch(arr, tgt ,n-1);



}

bool linearSearch( int arr[], int tgt, int n){
    for(int i = 0 ; i< n ; i++){
        if ( arr[i] == tgt ){
            return true;
        }
    }
    return false;
}

int main() {
    int arr[5]={31,52,23,14,15};
    
    bool ans = RecursiveLsearch(arr,85,5);

    // bool ans = linearSearch(arr, 52 , 5);

    cout<<"search result = " << ans ;

    return 0;
}