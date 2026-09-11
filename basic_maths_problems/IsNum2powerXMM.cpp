#include <iostream>
using namespace std;

void isNumOfpower2(int num ){
    while ( num != 1 ) {
        int mod = num%2;
        if (mod != 0 ){
            cout<< "NO" ;
            //break;
            return;
        }

        num = num/2;
    }

    // if ( num == 1 ) { cout<<"YES" ; }  i use this cuz i use of breck insted of return
    cout<<"YES";

}

int main() {
    int num = 511;

    isNumOfpower2(num);

    


    return 0;
}