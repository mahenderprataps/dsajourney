#include <iostream>
using namespace std;

int main() {
    int length= 5;
    int breath= 3;
    int row = breath;
    int clm= length;

    for(row= 1; row<=breath; row++){
        if (row == 1 || row == breath) {
            for(clm=1 ; clm<=length; clm++){
                    cout<<" * ";
            }
        }
        else  {
                cout<<" * ";
                for(clm=1; clm<=length-2 ;clm++){
                    cout<<"   ";
                }
                cout<<" * ";
        }
        cout<<endl;
    }


    return 0;
}