#include <iostream> 
using namespace std;

long long int reverse(int num) {
    long long int reverse = 0;

    while ( num != 0 ){
        int mod = num%10 ;
        reverse = reverse*10 + mod; //here main logic

        num = num/10;
    }


    return num;
}

int main() {
    int num = -7896;

    bool flag = 0;
    if (num > 0 ) { flag = 1 ;}
    else {
        flag = 0;
    }

    //remove sign
    num = abs(num);

    long long int rev = reverse(num);

    

    if ( flag == 0 ) {
         -1 * rev;
    }
    else {
        rev;
    }

    




    if ( rev > INT_MAX || rev < INT_MIN ) {
        cout << 0 ;
    }

    else {
        cout << rev ;
    }

    



    return 0;
}