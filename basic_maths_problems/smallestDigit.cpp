#include <iostream> 
using namespace std;

int main() {
    int num = 65654;

    int smallest = 9999999 ; // just for eg due INT_MAX is unable to define
    while ( num != 0 ){
        int mod = num%10 ;

        smallest = min(mod,smallest);

        // if ( mod < smallest ) {
        //     smallest = mod ;
        // }
        num = num/10;
    }

    cout << smallest;




    return 0;
}