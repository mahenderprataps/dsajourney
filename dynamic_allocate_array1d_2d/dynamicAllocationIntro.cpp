#include <iostream>
using namespace std;

int main() 
{
    // int n; cin>>n; 

    int *ptr = new int; // cant name dynamic heap memory

    cin>> *ptr ;
    cout<< *ptr ;
    delete ptr;
    
     

    return 0;
}