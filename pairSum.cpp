// #include <iostream>
// #include <vector>
// using namespace std;
//  vector<int> PairSum(vector<int> num, int target);
//  vector<int> PairSum(vector<int> num, int target){
//     vector<int> nums;
//     int n = num.size();
//  for(int i =0; i<n; i++){
//     for(int j = i+1; j <n; j++){
//         if(num[i]+ num[j] == target){
//             nums.push_back(i);
//             nums.push_back(j);
//             return nums;

//         }
//     }
//  }
//  }
// int main(){
//     vector<int> num = {6,3,9,12,0};
//     int target = 12;
//     vector<int> nums = PairSum(num, target);

//     cout << "The Pair sum is " << nums[0] << " , " << nums[1] << endl;
//     return 0;
// }

#include <iostream>
#include <vector>
using namespace std;
vector<int> Pairsum(vector<int> num, int target);
vector<int> Pairsum(vector<int> num, int target){
    int n = num.size();
    vector<int> ans;
    int i = n; 
    int j =n-1;
    while(i < j){
        int pairsum = num[i] + num [j]:

    }
}