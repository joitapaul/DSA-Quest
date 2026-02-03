//This is the code for printing the characters of vector

#include <iostream>
#include <vector>
using namespace std;
int main(){
    // vector <int> vec = {2,6,7}; 
    // cout << vec[0] << endl;
    // cout << vec[2] << endl;
    // cout << vec[1] << endl;

    vector <char> vec = { 'a', 'b', 'h', 's','j', 'p'};
    // cout << vec[0] << endl;
    // cout << vec[1] << endl;
    // cout << vec[2] << endl;
    // cout << vec[3] << endl;
    // cout << vec[4] << endl;
    // cout << vec[5] << endl;
    for(char value: vec){
        cout << value << endl;

    }
    cout << "Size =" << vec.size() << endl;

    return 0;

}
