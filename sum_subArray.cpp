#include <iostream>
#include <vector>
using namespace std;
int main(){
    int arr[] = {5,2,7,2,9,3,9,32};
   int n = 8;
   int currsum = 0;
   int maxSum = INT8_MIN;
    for(int st =0; st <n; st++){
   int currsum = 0;

         for(int end =0; end < n; end++){
            currsum = arr[end];
            maxSum = max(currsum, maxSum);
         }
       }
           cout << "Max subarray sum = " << maxSum << endl;
           return 0;
}