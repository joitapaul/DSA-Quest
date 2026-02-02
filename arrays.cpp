//This is the program to find the array elements:
#include <iostream>
using namespace std;
int main(){
    int arr[5] = {23, 45,65,87,34};
    int size = 5;

    cout << sizeof(arr)/ size << endl;
            cout << "The elements of the given array is below"  << endl;


    for(int i =0; i <=5; i++){

        // cout << "The elements of the given array is below" ;
        cout << arr[i]  << endl;
    }

    return 0;

}
