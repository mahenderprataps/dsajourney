#include <iostream>
using namespace std;

void si(int p,int r, int t) {

    int si= p*r*t / 100 ;

    cout<<si;
}

int main() {

    si(1000,5,15);

    return 0;
}