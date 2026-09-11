#include <iostream>
using namespace std;

int fact(int q){
    if( q== 0 || q== 1)
    {
        return 1;
    }
    return q * fact(q-1);
}

int main() {
    int n;
    cin>>n;
    int ans= fact(n);

    cout<<ans;
}