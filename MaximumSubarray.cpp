//This is code for MaximumSubarray

#include <iostream>
#include <vector>
using namespace std;
int main(){
int n =5;
int arr[5] = {2, 5, 9, 2, 7};
   for(int st=0; st<n; st++ ){
      for(int end =st; end <n; end++){
         for(int i =st; i <=end;i++ ){
            cout << arr[i] << " ";
         }
         cout << " " ;
      }
      cout << endl;
   }
   // cout << " ";
   return 0;
}
#include <iostream>
using namespace std;

int main() {
    int n = 5;
    int arr[5] = {2,5,9,2,7};

    for(int st = 0; st < n; st++) {
        for(int end = st; end < n; end++) {
            for(int i = st; i <= end; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
#include <iostream>
#include <vector>
using namespace std;
int main (){
   int arr[] = {5,2,7,2,9,3,9,32};
   int n = 8;
   int sum = 0;
   for(int st=0; st <n; st++){
      for(int end=st; end < n; end ++){
         for(int i = st; i <= end; i++){
            sum = sum+arr[i];
            cout << sum ;
         }
         cout << " ";
      }
      cout << endl;
   }
   return 0;

}
