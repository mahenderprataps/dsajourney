#include <iostream>
using namespace std;

void checkPrime(int n) {

    if (n== 1 || n== 0) { 
        cout<<"Not Prime Number"<< endl;
        return;
    }

    for (int i= 2; i<n; i++) {
        if ( n%i == 0) {
            cout<<"Not Prime Number"<< endl;
            return;
           
        }
    }
    cout<<"yes Prime Number"<< endl;

}

int main() {

    checkPrime(121);

    return 0;
}