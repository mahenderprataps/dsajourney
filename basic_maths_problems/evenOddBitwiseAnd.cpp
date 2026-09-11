#include <iostream> 
using namespace std;

int main() {
    int num = 1225;

    if ( (num&1) == 0 ){ cout << "even"; }

    else {
        cout << "odd";
    }

    return 0;
}