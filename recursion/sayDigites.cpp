#include <iostream>
using namespace std;

int digits(int a){
    char arr[]= {"zero","one","two","three","four","five","six","seven","eight","nine"};
    char darr[10];

    int i=0;
    while(a != 0){
        int n1= a%10;
        darr[i++] = arr[n1];
        a= a/10;
    }
}

int main() {
    int n; cin>>n;

    cout<<endl<<digits(n);


    return 0;
}