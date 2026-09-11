#include <iostream>
using namespace std;
void printrowwise(int arr[][2],int row,int clm){
    cout<<"printRowWise\n";
    for( int row =0 ;row<3 ;row++){
        for(int clm =0 ;clm<2 ;clm++){
            cout<<arr[row][clm]<<",";
        }
        cout<<endl;
    }
}

void printcolumnwise(int arr[][2],int row,int clm){
    cout<<"printCloumnWise\n";
    for( int clm =0 ;clm<2 ;clm++){
        for(int row =0 ;row<3 ;row++){
            cout<<arr[row][clm]<<",";
        }
        cout<<endl;
    }
}

void columnsum(int arr[][2],int row,int clm){
    // cout<<"he;;o";
    for( int clm =0 ;clm<2 ;clm++){
        int sum =0;
        // cout<<"done1";
        for(int row =0 ;row<3 ;row++){
            sum = sum + arr[row][clm];
            // cout<<sum;
        }
        cout<<sum<<endl;
    }

    
}
int main() {
    int arr[3][2];

    //insert into array
    int i=1;
    for( int row =0 ;row<3 ;row++){
        for(int clm =0 ;clm<2 ;clm++){
            arr[row][clm]=i;
            i++;
        }
    }

    printrowwise( arr,3,2);
    printcolumnwise(arr,3,2);
    columnsum(arr,3,4);
    // cout<<1;

    return 0;
}