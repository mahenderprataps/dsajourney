#include <iostream>
using namespace std;

int power(int x, int y)
{
    int ans= 1;
    while( y > 0)
    {
        if( y&1 /*reprsent if odd*/ )
        {
            ans = ans *x;
        }
        x = x *x;
        y = y>>1; /*also y/2  */
    }
    return ans;
}

int main() 
{
    int a,b;
    cin>>a>>b;

    cout<<"a power b is "<<power(a,b);

    return 0;
}