#include <iostream>
using namespace std;
#include <cmath>

int deciToBin(int a) {
    int finalBinary = 0;
    int i=0;
    while ( a > 0 ) {
        int b = a%2 ;
        finalBinary = b * pow(10,i++) + finalBinary;
        a = a/2 ;
    }

    return finalBinary ;

}

int main() {
    int num;
    cout<<"enter intiger: ";
    cin>>num ;

    int binNo = deciToBin(num) ;

    cout<< binNo ;




    return 0;
}