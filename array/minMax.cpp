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

void checkMinMax(int arr[] ,int size){
    int min = INT_MAX;
    int max = INT_MIN;
    for ( int j=0 ;j <size ;j++){
        if ( arr[j] < min ){
            min = arr[j];
        }
        if ( arr[j] > max ) {
            max = arr[j];
        }
    }
    cout<< "max val :"<<max<<endl;
    cout<< "min val :"<<min<<endl;
}

void inputArray( int arr[] ,int size ){
    for(int k =0 ;k<size ;k++){
        int in;
        cout<<"enter "<<k<<" val :";
        cin>>in;
        arr[k] = in ;
    }
    cout<<"done \n" ;
}


int main() {
    int size ;
    cout<<"how many numbers you want to check :" ;
    cin>>size;
    if( size >1000000) { cout<<"Array limit exceeded "; }
    

    int arr[size];

    inputArray( arr , size);

    Cout(arr ,size);
    
    checkMinMax(arr , size);
    



    return 0;
}