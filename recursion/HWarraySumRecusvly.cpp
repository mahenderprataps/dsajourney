#include <iostream>
using namespace std;

int Rsum(int arr[], int n){
    int sum = 0;
    // base case
    if( n == 0 || n == 1) {
        sum = arr[0];
        return sum;
    }
    sum = arr[n-1] + Rsum(arr,n-1);
}

int main() {
    int arr[5]={31,52,23,14,15};
    
    int summ = Rsum(arr,5);

    cout<<"array sum recursivly is " << summ;

    return 0;
}