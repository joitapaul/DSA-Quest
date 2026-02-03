//This is the program for the insertion of the elements----------------

#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> vec;
     vec.push_back(0) ;
     vec.push_back(4) ;
     vec.push_back(7) ;
     vec.push_back(8) ;
     vec.push_back(3) ;
     vec.push_back(5) ;
     cout << vec.size() << endl;
     cout << vec.capacity() << endl;

    for(int val: vec){
        cout << val << endl;
    }
     return 0;
}
