// This is the program to finnd the smallest number among the given numbers

#include <iostream>
using std;
int main (){
    int num[] = {84,27,56,78,23};
    int size = 5;

    int smallest_num = INT32_MAX;
    for(int i =0; i<size; i++){
        if(num[i] < smallest_num){
             smallest_num = num[i];

        }

    }
    cout << "smallest_num =" << smallest_num <<endl;
    return 0;

}
