#include <iostream>
using namespace std;

int main() {
    int n= 5;
    for(int row= 1; row<=n; row++){
        if (row == 1 || row == n) {
                for(int clm=1 ; clm<=row; clm++){
                    cout<<" * ";
                }
        }
        else  {
                cout<<" * ";
                for(int clm=1; clm<=row-2 ;clm++){
                    cout<<"   ";
                }
                cout<<" * ";
        }
        cout<<endl;
    }


    return 0;
}