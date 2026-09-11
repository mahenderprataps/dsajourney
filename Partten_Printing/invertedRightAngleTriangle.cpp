#include <iostream>
using namespace std;

int main() {
    int n= 5;

    for( int i= 5; i>=1 ;i--){

        for( int j= i; j>=1 ;j--){
            cout<<" * ";
        }
        cout<<endl;
    }



    return 0;
}

// METHOD 2


// #include <iostream>
// using namespace std;

// int main() {

//     int n= 4;
//     for(int row= 1; row<=n; row++){
//         for(int clm=1; clm<=n-(row-1);clm++){
//             cout<<" * ";
            
//         }
//         // n--;
//         cout<<endl;
//     }


//     return 0;
// }