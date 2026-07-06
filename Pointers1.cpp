##This is the code for the pointers
#include <iostream>
using namespace std;
int main(){
    int a = 49;
    int * ptr = &a;
    int **partptr = &ptr;
    cout << a << endl;
    cout << &a << endl;
    cout << ptr << endl;
    cout << &ptr    << endl;
    cout << partptr << endl;
    cout <<  &partptr << endl;
   
}
