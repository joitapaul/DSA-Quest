#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n = 6;
    int arr[5] = {4,6,32,77,67};
    for(int start=0; start<n; start++ ){
        for(int end= start; end<n; end++){
          
                for(int i = start; i<=end; i++) {
                    cout << arr[i] ; 
                }
            
             cout << " ";
        }
         cout << endl;
    }
    return 0;

}