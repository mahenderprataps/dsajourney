#include <iostream>
using namespace std;

int main() {
    for(int row= 1; row<=6; row++){
        for(int clm= row; clm>=1 ; clm--){
            cout<<" * ";
        }
        cout<<endl;
    }


    return 0;
}