#include <iostream>
using namespace std;

int gcd(int x, int y)
{
    if( x == 0) 
    {
        return y;
    }
    if (y == 0)
    {
        return x;
    }
    while( x != y)
    {
        if( x > y)
        {
            x = x-y;
        }
        else
        {
            y = y-x;
        }
        return x;
    }
}

int main() 
{
    int a ,b;
    cin>>a>>b;

    cout<<"GREATEST COMMAM DIVISION = "<< gcd(a,b);
}