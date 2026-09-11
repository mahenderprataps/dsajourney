#include <iostream>
using namespace std;

void chkPrime(int num ){
    int i=2;
    while ( num > i ) {
        if ( num % i == 0) {
            cout<<"not prime";
            return;
        }


        i+=1;
    } 
    cout<<"yes Prime";

}

int main() {
    int num = 413;

    chkPrime(num);

    


    return 0;
}