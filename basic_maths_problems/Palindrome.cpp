#include <iostream> 
using namespace std;

int reverse( int num ){
    int reverse = 0;
    while ( num != 0 ){
        int mod = num%10 ;
        reverse = reverse*10 + mod; //here main logic

        num = num/10;
    }

    return reverse ;
}

int main() {
    int orignal = 1210121 ;

    int rev = reverse(orignal);

    if ( orignal == rev) {
        cout << "yes number is palindrome";
    }
    else{
        cout<< " no number is not palindrome";
    }




    return 0;
}