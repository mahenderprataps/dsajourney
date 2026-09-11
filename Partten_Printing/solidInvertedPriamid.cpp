#include <iostream>
using namespace std;

int main() {
    int n = 5;
    for(int row=1 ; row<=n; row++){

        for ( int c1=1 ; c1<=row-1; c1++){
            cout<<"   ";
        }
        for ( int c2=1 ; c2 <=2*(n-row)-1; c2++){
            cout<<" * " ;
        }
        cout<<endl;
    }



    return 0;
}