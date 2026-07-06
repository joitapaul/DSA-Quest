# This is the code for the pointers

#include <iostream>
using namespace std;
int main(){
    int arr[] = {4, 46,78,55, 98};
    int a = 30;
    int * ptr = &a;
    cout << ptr << endl;
    ptr ++;
    cout << &a << endl;
    cout << a << endl;
    cout << ptr << endl; 
    return 0;
}
