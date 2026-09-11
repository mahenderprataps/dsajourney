#include <iostream> 
using namespace std;

int main() {
    int num = -987;
    int reverse = 0;

    if ( num == 0 ) { cout << "reverse is " << reverse ;}

    else if ( num < 0 ) {

        int num1 = -(num);
        while ( num1 != 0 ){
        int mod = num1%10 ;
        reverse = reverse*10 + mod; //here main logic

        num1 = num1/10;
        }

        cout << "reverse is -" << reverse ;
    }

    else { 
        while ( num != 0 ){
        int mod = num%10 ;
        reverse = reverse*10 + mod; //here main logic

        num = num/10;
        }

        cout << "reverse is " << reverse ;
        
    }

    




    return 0;
}