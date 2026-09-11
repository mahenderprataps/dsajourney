#include <iostream>
using namespace std;

int stair(int a){
    if( a<0 ){
        return 0;
    }
    if( a == 0){
        return 1;
    }

    return stair(a-1) + stair( a-2);
}

int main() {
    int n; cin>>n;

    cout<<endl<<stair(n);


    return 0;
}