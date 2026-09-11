#include <iostream>
using namespace std;

int  main() {
    // int n= 3;
    // //out loop for row/move verticlly 
    // for( int row =1; row <=(2*n)-1 ;row++){

    //     if( row <=3 ){
    //         for( int c1 =1; c1<= n-row; c1++){
    //             cout<<"   ";
    //         }
    //         for( int c2 =1 ;c2 <= 2*row -1 ;c2++){
    //             cout<<" * ";
    //         }
    //         cout<< endl;
    //     }
    //     else {
    //         for( int c3 =1 ;c3 < n-1 ;c3++){
    //             cout<<" s ";
    //         }
    //         int i=n;
    //         // for( int c4 =1 ;c4 < n ;c4++){
    //         //     cout<<" * ";
    //         // }
    //         cout<<endl;
    //     }
    // }



    int n = 4;
    /* 
    - - - * 
    - - * * * 
    - * * * * * 
    * * * * * * * 
    - * * * * * 
    - - * * * 
    - - - * 
    */


    // Part 1
    int n_part1 = n-1;
    for ( int r= 1 ; r <= n_part1 ;r++ ){
        for ( int col1 =1 ;col1 <= n_part1-r+1 ;col1++){
            cout << "   ";
        }
        for ( int col2 =1 ; col2 <= 2* r - 1 ;col2++ ){
            cout<< " * ";
        }
        cout << endl;
    }

    int n_part2 = n;
    for ( int c =1 ;c <= 2*n -1 ; c++){
        cout<<" * ";
    }
    cout<< endl;

    int n_part3 = n-1;
    for ( int r= 1 ; r <= n_part3 ;r++ ){
        for ( int col4 =1 ;col4 <= r ;col4++){
            cout << "   ";
        }
        for ( int col5 =1 ; col5 <= (2*n_part3) - (2*r) + 1 ;col5++ ){
            cout<< " * ";
        }
        cout << endl;
        cout<< endl; 
    }



    return 0;
}