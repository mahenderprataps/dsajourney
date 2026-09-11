#include <iostream>
using namespace std;

void sip(int val ,int yr, int retn) {

    int sip= val*yr*retn ;

    cout<<sip;
}

int main() {

    sip(1000,5,15);

    return 0;
}