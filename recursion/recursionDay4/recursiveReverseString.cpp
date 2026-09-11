#include <iostream>
#include <string>
using namespace std;

string reverseStr(string s) {
    int st = 0;
    int end = s.length()-1;

    while( st < end ) {
        swap(s[st], s[end]);
        st++; end--;
    }

    return s;
}

string recursiveRevStr(string s , int st , int end ){

    if( st >= end ){
        return s;
    }
    swap(s[st], s[end]);
    st++;
    end--;
    return recursiveRevStr(s, st, end);

}

int main() {
    string name = "hello";

    int end = name.length()-1;

    // string ans = reverseStr(name);
    string ans = recursiveRevStr(name , 0 , end );
    cout<<"renverse str = " << ans;


    return 0;
}