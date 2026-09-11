#include <iostream>
using namespace std;

int power(int x, int y, int z)
{
    long long ans= 1;
    while( y > 0)
    {
        if( y&1 /*reprsent if odd*/ )
        {
            ans = (ans *(x)%z)%z;
        }
        x = ((x)%z *(x)%z)%z;
        y = y>>1; /*also y/2  */
    }
    return ans;
}

int main() 
{
    int a,b,n;
    cin>>a>>b>>n;

    long long result = power(a,b,n);
    cout<<"a power b is "<<result;

    return 0;
}