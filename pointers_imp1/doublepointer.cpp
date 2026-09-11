#include <iostream>
using namespace std;

int main() 
{
    int i= 3;
    cout<<"i =" <<&i;
    int *ptr ;
    cout<<endl<<"b = " << ptr <<endl;

    // ptr = &i; //correct
    // *ptr = i; //print nothing no error display
    // *ptr = &i; //display error
    
    cout<<"hello hello "<< endl;
    *ptr = i;
    cout<<"hello hello "<< endl;


    cout<<endl<<"val if p = "<< *ptr;

    cout<<endl<<"after" << ptr;


}