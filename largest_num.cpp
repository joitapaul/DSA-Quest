//This is the program for printing the largest number:--------------------------

#include <iostream>
using namespace std;
int main(){
    int num[] = {34,21,67,43,89};
    int size = 5;


    int largest_num = INT32_MIN;
    for(int i=0; i<size; i++ ){
        if (num[i] > largest_num){
            largest_num = num[i];
        }
    }
    cout << "The greatest number is :" << largest_num;
    return 0;
}
