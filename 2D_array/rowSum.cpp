#include <iostream>
using namespace std;
void printrowwise(int arr[][2],int row,int clm){
    for( int row =0 ;row<3 ;row++){
        for(int clm =0 ;clm<2 ;clm++){
            cout<<arr[row][clm]<<",";
        }
        cout<<endl;
    }
}

void rowsum(int arr[][2],int row,int clm){
    for( int row =0 ;row<3 ;row++){
        int sum =0;
        for(int clm =0 ;clm<2 ;clm++){
            sum = sum + arr[row][clm];
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

    // printrowwise( arr,3,2);

    // rowsum(arr,3,4);
    
    int arr[2] = {0,1};
    cout<<arr[1]<<endl;
    cout<<arr[4];


    return 0;
}