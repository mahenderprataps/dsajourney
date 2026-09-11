#include <iostream>
using namespace std;
#include <vector>


int main() {
    int n ; cin>>n;
    int cont= 0;
    vector<bool> v(n+1, true) ;
    v[0]= v[1]= false;

    for(int i=2; i<n; i++){
        if(v[i]){
            // cout<<i<<endl;
            cont++;
            for(int j= 2*i; j<n; j=j+i){
                v[j]= 0;
            }
        }
        
    }
    cout<<endl<<"count = "<<cont;

}