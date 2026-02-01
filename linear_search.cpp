#include <iostream>
using namespace std;
int linear_search(int arr[], int size, int target){
      for(int i =0; i< 5; i++ ){
        if(arr[i] == target){
            return i;
        }

    }
    return -1;
}
int main(){
    int arr[5] = { 23, 43, 22, 89, 59};
    int size = 5;
    int target = 89;
      
    cout << linear_search(arr,size,target) << endl;
      return 0;
    
    
    return 0;
}