#include <iostream>
#include <string>
using namespace std;

bool recursivePalin(string s , int st , int end ){

    if( st >= end ){
        return 1;
    }
    if (s[st] != s[end]){
        return 0;
    }

    return recursivePalin(s, st+1, end-1);

}

int main() {
    string name = "oillo";

    int end = name.length()-1;

    bool ans = recursivePalin(name,0,end);

    cout<<"checkPaline result : "<< ans;

   

    return 0;
}