#include <iostream>
using namespace std;

int main() {

    int arr[5] ={15,52,84,65,33}; //intialised with all zero
    cout<<endl<< arr[0];
    cout<<endl<< arr[3];

    cout<<endl<< arr; //name of array is inbuilt pointer
    // or say that name of array is pointing its 0th element
    // location 

    // int *ptr = &arr[-1];
    // cout<<endl<<ptr;
    // cout<<endl<< ++ptr;
    // cout<<endl<< ++ptr;
    // cout<<endl<< ++ptr;
    // cout<<endl<< ++ptr;
    // cout<<endl<< ++ptr;

    int *ptr= &arr[0];
    // int *ptr= &arr; wrong
    cout<<endl<< ptr;
    cout<<endl<< arr; // it mean arr is also pointer

    cout<<endl<< "NOW PLAY WITH arr ";
    cout<<endl<< &arr;// arr is already address so,
    // address of address is also adddress, output same as arr

    cout<<endl<< *arr; // value at arr address

    cout<<endl<< *arr+1; // add 1 in value at arr
    cout<<endl<< *(arr+1); // value at next address
    // int take 4bytes add 1 mean if 401 then move to 404 
    cout<<endl<< *(arr+2);//move to next address

    cout<<endl<< arr[1]; // internaly *(arr + i) = arr[i]
    cout<<endl<< 1[arr] ;// but [i]arr is wrong

    cout<<endl<<"arr size= "<< sizeof(arr);
    // imp arr point to 0th but contain full arr length
    cout<<endl<<"ptr size= "<< sizeof(ptr);
    // ptr also point 0th but contain only ptr length 
    
    cout<<endl<<"arr size= "<< sizeof(*ptr); // print value at ptr

    cout<<endl<< arr+1; // arr++ is wrong
    cout<<endl<< ptr++ ;// ptr++ is correct
    // imp because ptr is store address of 1 int at one time 
    // and move to hold next address as ptr= ptr+1 but but
    // it is accecpted that arr is pointing at 0th element but
    // arr contain whole length of array thats why we move to 
    // next address by arr+1 but never hold like arr = arr + 1;

    // very obeouise BUT VERY IMPORTANT
    

















}