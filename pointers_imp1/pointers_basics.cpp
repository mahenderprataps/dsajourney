#include <iostream>
using namespace std;

int main() {

    int num = 10;
    cout<<num<<endl;
    cout<<&num; 

    // cout<<*(&num); not work

    int *p = &num;
    cout<<endl<< p;
    cout<<endl<< *p;
    cout<<endl<< &p;
    cout<<endl<< sizeof(p);
    cout<<endl<< sizeof(*p);
    cout<<endl<< sizeof(&num);

    int n1 = 23;
    // int *p = n1; wrong
    // * --> value
    // & --> address
    // int *p = &n1; it mean p ki value mai n1 ka address

    // int *p1; //bad practice
    // cout<<p1; // point random address
    cout<<endl<<"hello";
    int *p1=0;
    cout<<endl<<"p1 ="<<p1;
    cout<<endl<< sizeof(p1);


    

}