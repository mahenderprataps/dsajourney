#include <iostream>
using namespace std;

int power2(int e){
    if( e== 0)
    {
        return 1;
    }
    return 2 * power2(e-1);
}

int main() {
    int n;
    cin>>n;
    int ans= power2(n);

    cout<<ans;
}