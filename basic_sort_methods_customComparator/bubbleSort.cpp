#include <iostream>
using namespace std;

#include <vector>

int main() {
    //BUBBLE SORTING algorithim
    vector <int> v;
    v = {5,4,3,2,1};
    
    int /*size*/ n = v.size();

    for ( int i= 0; i< n-1; i++){
        for( int j= i+1; j< n ;j++) {
            if( v[i] > v[j]){
                swap(v[i],v[j]);
            }
        }
    }

    //print sorted array
    for(int i=0; i<n ; i++){
        cout<<endl<<v[i]<<endl;
    }
    
}