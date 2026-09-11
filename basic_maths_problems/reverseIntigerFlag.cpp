#include <iostream> 
using namespace std;

int main() {
    int num = -7896;

    bool flag = 0;
    if (num > 0 ) { flag = 1 ;}
    else {
        flag = 0;
    }

    //remove sign
    num = abs(num);

    // reverse algo
    int reverse = 0;

    while ( num != 0 ){
        int mod = num%10 ;
        reverse = reverse*10 + mod; //here main logic

        num = num/10;
    }

    if ( flag == 0 ) {
        cout << -1 * reverse;
    }
    else {
        cout<< reverse;
    }

    



    return 0;
}