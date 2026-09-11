#include <iostream>
using namespace std;

int main() {

    // int arr[10]; static allocation

    int n ; cin>>n;

    int *ptr = new int[n]; // allocate in heap dynamically

    //most important step ie clear occupied apce from heap
    delete []ptr ;


    return 0;
}