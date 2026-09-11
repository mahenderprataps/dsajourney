#include <iostream>
using namespace std;

void Cout( int arr[] ,int size) {

    for(int i =0 ;i< size ;i++) {
        cout<<arr[i]<< " ";
    }
    cout<<endl;
}

void sort0s1s(int arr[] ,int size) {
    int s = 0;
    int e = size-1;
    for (int i=0 ;i<size ;i++) {
        if( arr[i] == 0 ){
            arr[s] = arr[i];
            s++;
        } else {
            arr[e] = arr[i];
            e--;
        }
    }
}

int main() {
    int size = 10;
    int arr[size] = {0,1,1,0,1,1,0,0,1,1};

    cout<<"YOUR INPUT ARRAY \n";
    Cout(arr ,size);

    sort0s1s(arr,size);

    cout<<"after sort \n";
    Cout(arr ,size);



    return 0;
}