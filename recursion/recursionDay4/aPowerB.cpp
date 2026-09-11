#include <iostream>
using namespace std;

int ApowerB(int a, int b){
    if ( b == 0 ){ return 1 ; }

    if ( b == 1 ) return a ;

    if ( b%2 != 0 ){   return a * ApowerB(a,b/2) * ApowerB(a, b/2) ; }

    else {
       return  ApowerB(a,b/2) * ApowerB(a, b/2) ;
    }
}

int main() {

    cout<<" a power b = "<< ApowerB(3,3);

    return 0;
}