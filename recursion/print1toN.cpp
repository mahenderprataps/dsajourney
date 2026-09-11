#include <iostream>
using namespace std;

void print(int q){
    if( q== 0 )
    {
        return; // base case
    }

    // cout<<q;  // head recursion

    print(q-1); // recursive case

    cout<<q; // tail recursive
}

int main() {
    int n;
    cin>>n;
    print(n);

    
}