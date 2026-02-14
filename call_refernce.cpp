//This is the program for the change of the elements of the array:-------------------------------

include <iostream>
using namespace std;

void changeArr(int arr[], int size){
    for(int i =0; i< size; i++){
        arr[i] = 2*arr[i];
    }
}
int main(){
    int arr[] ={ 2, 5, 7, 9};
    changeArr(arr,4 );

    cout << "in main\n";
    
}
