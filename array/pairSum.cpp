#include <iostream> 
using namespace std;

void Cout( int arr[] ,int size) {

    for(int i =0 ;i< size ;i++) {
        cout<<arr[i]<< " ";
    }
    cout<<endl;
}

bool checkpairsum( int arr[] , int size ,int target){
    
    for ( int i =0 ; i< size ;i++) {
        for (int j = 0 ; j< size ; j++){
            if ( (arr[i]+arr[j]) == target) {
                return true;
            
            }
            
        }
    }


    return false;
}

void duplicateAllowCheckPairSum( int arr[] , int size ,int target){
    
    for ( int i =0 ; i< size ;i++) {
        for (int j = 0 ; j< size ; j++){
            if ( (arr[i]+arr[j]) == target) {
                cout<<"("<<arr[i]<<","<<arr[j]<<")"<<endl ;
            
            }
            
        }
    }

}

void NoduplicateAllowCheckPairSum( int arr[] , int size ,int target){
    
    for ( int i =0 ; i< size ;i++) {
        for (int j = i+1 ; j< size ; j++){
            if ( (arr[i]+arr[j]) == target) {
                cout<<"("<<arr[i]<<","<<arr[j]<<")"<<endl ;
            
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
    
    cout<< checkpairsum(arr, size,target);cout<<endl;
    cout<<"-----------------------------------";cout<<endl;
    duplicateAllowCheckPairSum(arr, size,target);cout<<endl;
    cout<<"-----------------------------------";cout<<endl;
    
    NoduplicateAllowCheckPairSum(arr, size,target);cout<<endl;
    



    return 0;
}