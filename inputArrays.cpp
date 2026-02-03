//This is the program for taking input in arrays: -----------------------

#include <iostream>
using namespace std;
int main(){
    int arr[6];

    for(int i=0; i <=5; i++){
        cout << "Enter the number of elements in the array";
        cin >> arr[i];
    }
    for (int i=0; i<< 5; i++){
        cout << arr[i] << endl;
         //cout << "Enter the number of elements in the array" << arr[i] << endl;
    }
    return 0;
}
