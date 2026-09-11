#include <iostream>
using namespace std;

int main() {
    int n= 5; //take input
    //outer loop ,no of rows
    for( int r= 1; r<= n; r++ ){
        //inner loop1 for print spaces
        for(int c1= 1; c1<= n-r ;c1++){
            cout<<"   ";
        }
        //now innner loop2 for print priamid
        if ( r==1 ) {
            //for( int c3=1 ; c3<=r ; c3++){
                cout<<" * ";
            //}
        }
        else if( r==n ) {
            for( int c3=1 ; c3<=2*r -1 ; c3++){
                cout<<" * ";
            }
        }

        else{
            cout<<" * ";
            for( int c2 =1; c2<=(r*2)-3; c2++){
                cout<<"   ";
            }
            cout<<" * ";
        }
        cout<<endl;

    }




    return 0;
}