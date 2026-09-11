#include <iostream> 
using namespace std;

void Cout( int arr[] ,int size) {

    for(int i =0 ;i< size ;i++) {
        cout<<arr[i]<< " ";
    }
    cout<<endl;
}


void CheckTripleSum( int arr[] , int size ,int target){
    
    for ( int i =0 ; i< size ;i++) {
        for (int j = i+1 ; j< size ; j++){
            for( int k = j+1 ; k< size ; k++ ) {
                if ( (arr[i]+arr[j]+arr[k]) == target) {
                    cout<<"("<<arr[i]<<","<<arr[j]<<","<<arr[k]<<")"<<endl ;
            
                }
            }
            
        }
    }

}
int main() {
    int size= 10;
    int arr[size] = {1,2,3,4,5,6,7,8,9,0};

    int target = 10;

    cout<<"YOUR INPUT ARRAY \n";
    Cout(arr ,size);
    
    CheckTripleSum(arr, size,target);cout<<endl;
    



    return 0;
}