#include <iostream>
using namespace std;
#include <cmath>

int binTODecimal(int a) {
    int finalDeciNo= 0;
    int i= 0;
    while (a>0) {
        int b= a%10;
        finalDeciNo = finalDeciNo+ b*pow(2,i++);
        a= a/10;
    }
    return finalDeciNo;
}


int main() {
    int num;
    cout<<"input Binary : ";
    cin>>num ;

    int deciNo= binTODecimal(num);

    cout<< deciNo ;




    return 0;
}