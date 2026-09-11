#include <iostream>
using namespace std;

int fibo(int q){
    if( q== 0 || q== 1)
    {
        return q ;
    }
    return fibo(q-1) + fibo(q-2) ;
}

int main() {
    int n;
    cin>>n;
    int ans = fibo(n);

    cout<<ans;
}