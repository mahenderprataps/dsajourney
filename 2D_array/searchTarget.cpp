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

string searchTarget(int arr[][2],int row,int clm ,int target){
    for( int clm =0 ;clm<2 ;clm++){
        for(int row =0 ;row<3 ;row++){
            if( arr[row][clm] == target){
                return "found";
            }
        }
        
    }
    return "not found";
    
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

    int target = 5;

    printrowwise( arr,3,2);
    printcolumnwise(arr,3,2);
    cout<< searchTarget(arr,3,2,target);
    // cout<<1;

    return 0;
}