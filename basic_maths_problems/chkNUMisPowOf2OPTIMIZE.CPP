#include <iostream>
using namespace std;

void isNumOfpower2(int n){
    if( (n & (n-1)) == 0) {
        cout<<"yes";
    } else {
        cout<<"no ";
    }

}

int main() {
    int num = 512;

    isNumOfpower2(num);

    


    return 0;
}