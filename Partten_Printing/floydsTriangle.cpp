#include <iostream>
using namespace std;

int main() {
    int a =1;
    for(int row= 1; row<=6; row++){
        
        for(int clm= 1; clm<=row ; clm++){
             cout<<a++ ;
        }
        cout<<endl;
    }


    return 0;
}