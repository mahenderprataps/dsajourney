#include <iostream>
using namespace std;

int main() 
{
    int r;
    cin>>r;

    int col;
    cin>>col;

    // create rows and colums
    int **arr = new int * [r] ; //rows
    for( int i =0; i<r ; i++){
        arr[i] = new int[col]; //columns
    }

    // now input values
    for( int i=0 ; i<r ;i++){
        for(int j= 0; j<col ;j++) {
            cin>>arr[i][j];
        }
    }


    // now output values
    for( int i=0 ; i<r ;i++){
        for(int j= 0; j<col ;j++) {
            cout<< arr[i][j]<<" ";
        }cout<<endl;
    }

    //most important step
    // delete heap memory after usage
    for( int i=0 ; i<r ;i++){
        delete []arr[i]; //delete all colums
    }
    delete [] arr; // clear rowṇ



}