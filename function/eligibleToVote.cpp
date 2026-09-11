#include <iostream>
using namespace std;

void check(int age ) {

    if ( age < 18 ) {
        cout<<"not Eligible"<< endl;
    }
    cout<<"Eligible for voting"<< endl;
}

int main() {

    check(100);

    return 0;
}