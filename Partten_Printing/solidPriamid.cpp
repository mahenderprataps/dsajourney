#include <iostream>
using namespace std;

int main() {
    int n = 5;
    for(int i=1 ; i<=n; i++){


        // //int last=5;
        // for( int j= 1; j<=(2*n)-1; j++ ){
        //     cout<<" * ";
            
        // }
        // //last++;
        // cout<<endl;

        if ( i == n ) {
            for( int j=1 ;j<=(2*n)-1 ;j++){
                cout<<" * ";
            
            }
        }
        else {
            // for( int j=n-1 ;j<=1 ;j--){
            //     cout<<" 1 ";
            // }
            // for ( int k= 1; k<=i ;k++){
            //     cout<<" * ";
            // }
            // cout<<endl;

            for(int j=1; j<=n-1; j++) {

                if ( j==1){ cout<<" t ";}
                
                cout<<4;
            }
            cout<<" * ";
            for(int j=1; j<=n-1; j++) {
                
                cout<<4;
            }

        }
        cout<<endl;
    }



    return 0;
}